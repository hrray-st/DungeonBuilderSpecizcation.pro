#include "dungeoncreator.h"
#include "dungeon.h"
#include "common.h"
#include "roomdisplay.h"

using namespace std;

CDungeon::CDungeon()
{

}

CDungeon::~CDungeon()
{

}

int CDungeon::run()
{
    return doLoopEvent();
}

int CDungeon::doLoopEvent()
{
    string strIn;
    bool bCanQuit = false;
    while(1) {
        /// start
        cout << "> ";
        cin >> strIn;
        if(strIn == "dungeon_builder.exe" || strIn == "dungeon_builder") {
//            cout << "start" << endl;
//            CDugIns->startGame();
            CDugIns->startGame();
            CDugIns->setFloor(1);
//            _gameRecord.setFloor(1);
            cin.ignore();
            cin.get();
            CDugIns->enterGame();

            continue;
        }
        if(strIn == "q" || strIn == "quit") {
            bCanQuit = true;
            cout << "*Are you sure you want to quit? (y/n) *" << endl;
            continue;
        }

        /// quit operator
        if(strIn == "y" && bCanQuit) {
            /// quit
            cout << "Goodbye!" << endl;
            break;
        } else if (strIn == "n" && bCanQuit) {
            /// reset CanQuit
            bCanQuit = false;
            continue;
        }

        if(_inputParse.inputCmp(strIn.c_str())) {
//            cout << "" << endl;
            if(_bShowRoom) {
                int n = atoi(strIn.c_str());
                if (n > 0 && n <= 9) {
                    CRoomDisplay::printRoom(n);
                    CDugIns->setFloor(3);
                    CDugIns->enterContinue();
                    cin.ignore();
                    cin.get();
                    CDugIns->runGame(2);
                    _bShowRoom = false;
                }
            }
            int nFloor = CDugIns->getFloor();
            CDugIns->runGame(nFloor);
            if(nFloor == 6) {
                CDugIns->setFloor(2);
                CDugIns->enterContinue();
                cin.ignore();
                cin.get();
                CDugIns->runGame(2);

            }
            if(nFloor == 5) {
                CDugIns->setFloor(4);
                _bShowRoom = true;
                /// start show room
            }

//            CDugIns->setFloor(nFloor);

        }

    }
    return 0;
}

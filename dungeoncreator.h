#ifndef CDUNGEONCREATOR_H
#define CDUNGEONCREATOR_H


#include "print.h"
#include "gamedatamgr.h"
#include "random.h"
#include "gamerecord.h"

class CDungeonCreator
{
public:
    static CDungeonCreator* Instance();
    static void Release();

    void startGame();
    void enterGame();
    void runGame(int index);
    void setGameWidthHeight(int width, int height);
    void setFloor(int floor);
    int getFloor();
    bool judgeCmd(std::string strIn);
    void enterContinue();

private:
    CDungeonCreator();
    ~CDungeonCreator();


private:
    static CDungeonCreator* m_instance;
    CPrint                  m_print;
    CGameDataMgr*           m_gameDataMgr;
    CGameRecord             m_gameRecord;
};

#endif // CDUNGEONCREATOR_H

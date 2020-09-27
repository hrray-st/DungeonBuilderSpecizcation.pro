#include "gamerecord.h"
#include "dungeoncreator.h"

CGameRecord::CGameRecord()
    : _floor(0)
    , _showRoom(false)
{

}

CGameRecord::~CGameRecord()
{

}

void CGameRecord::setFloor(int floor)
{
    _floor = floor;
}

bool CGameRecord::judgeCmd(std::string strIn)
{
    bool bRet = false;
    switch (_floor) {
    case Floor_Zero:
        if(strIn == "dungeon_builder.exe" || strIn == "dungeon_builder")
        {
            bRet = true;
        }
        break;
    case Floor_One:
        if (strIn == "g" || strIn == "r" || strIn == "q")
        {
            bRet = true;
            if(strIn == "r") {
                _floor = 1;
            }
            if(strIn == "g") {
                _floor = 2;
            }

        }
        break;
    case Floor_Two:
        if (strIn == "d" || strIn == "v" || strIn == "r")
        {
            bRet = true;
            if(strIn == "r") {
                _floor = 1;
            }
            if(strIn == "d") {
                 _floor = 3;
            }
            if(strIn == "v"){
                _floor = 6;
            }
        }
        break;
    case Floor_Three:
        if (strIn == "d" || strIn == "r")
        {
            bRet = true;
            if(strIn == "d") {
                _floor = 5;
                /// start show room
                ///
                _showRoom = true;
            }
            if(strIn == "r") {
                _floor = 1;
            }
        }
        break;
    case Floor_Four:
    {
        int num = atoi(strIn.c_str());
        if(num > 0)
        {
            bRet = true;
        }
        break;
    }
    case Floor_Five:
        break;
    case Floor_Six:
        break;
    case Floor_Seven:
        break;
    case Floor_Eight:
        break;
    case Floor_Nine:
        break;
    default:
        break;
    }
    return bRet;
}


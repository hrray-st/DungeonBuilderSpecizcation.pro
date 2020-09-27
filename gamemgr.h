#ifndef GAMEMGR_H
#define GAMEMGR_H

#include "common.h"
interface IGame
{
    virtual void startPlay() = 0;
    virtual void getCmdAndRun(std::string strCmd) = 0;
    virtual void getLevel() = 0;
    virtual void enterLevel() = 0;
};


#endif // GAMEMGR_H

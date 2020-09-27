#ifndef CGAMEPLAY_H
#define CGAMEPLAY_H

#include "common.h"
#include "gamemgr.h"

class CGamePlay : public IGame
{
public:
    CGamePlay();
    ~CGamePlay();
    virtual void startPlay();
    virtual void getCmdAndRun(std::string strCmd);
    virtual void getLevel();
    virtual void enterLevel();


};

#endif // CGAMEPLAY_H

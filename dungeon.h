#ifndef CDUNGEON_H
#define CDUNGEON_H

#include "inputparse.h"
#include "gamerecord.h"

class CDungeon
{
public:
    CDungeon();
    ~CDungeon();

public:
    int run();

private:
    int doLoopEvent();

    CInputParse _inputParse;
    bool _bShowRoom { false };

};

#endif // CDUNGEON_H

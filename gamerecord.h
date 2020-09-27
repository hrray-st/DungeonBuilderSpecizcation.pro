#ifndef CGAMERECORD_H
#define CGAMERECORD_H

#include "common.h"

enum FloorNum {
    Floor_Zero = 0,
    Floor_One = 1,
    Floor_Two = 2,
    Floor_Three = 3,
    Floor_Four = 4,
    Floor_Five = 5,
    Floor_Six = 6,
    Floor_Seven = 7,
    Floor_Eight = 8,
    Floor_Nine = 9,

};

class CGameRecord
{
public:
    CGameRecord();
    ~CGameRecord();

    void setFloor(int floor);
    bool getShowRoom() { return _showRoom; }
    void setShowRoom() { _showRoom = false; }
    int getFloor() { return _floor; }
    bool judgeCmd(std::string strIn);

private:
    int _floor;
    bool _showRoom;
};

#endif // CGAMERECORD_H

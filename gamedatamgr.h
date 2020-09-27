#ifndef CGAMEDATAMGR_H
#define CGAMEDATAMGR_H

#include "common.h"
#include "random.h"


class CRandom;

class CGameDataMgr
{
public:
    CGameDataMgr(int width, int height);
    ~CGameDataMgr();

    void generate(int maxFeatures);
    void print();

private:
    char getTile(int x, int y) const;
    void setTile(int x, int y, char tile);
    bool createFeature();
    bool createFeature(int x, int y, Direction dir);
    bool makeRoom(int x, int y, Direction dir, bool firstRoom = false);
    bool makeCorridor(int x, int y, Direction dir);
    bool placeRect(const Rect& rect, char tile);
    bool placeObject(char tile);

private:
    int                 _width;
    int                 _height;
    std::vector<char>   _tiles;
    std::vector<Rect>   _rooms; // rooms for place stairs or monsters
    std::vector<Rect>   _exits; // 4 sides of rooms or corridors
    CRandom*            _random;

};

#endif // CGAMEDATAMGR_H

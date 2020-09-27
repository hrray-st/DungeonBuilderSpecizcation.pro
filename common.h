#ifndef COMMON_H
#define COMMON_H

#include <random>
#include <vector>
#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <functional>
#include <memory>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QString>

enum EM_PRINT_TYPE {
    EM_PRINT_TYPE_WELCOME = 0,
    EM_PRINT_TYPE_CREATING = 1,
    EM_PRINT_TYPE_DUNGEON_LEVEL = 2,
    EM_PRINT_TYPE_EXAMPLE_DUNGEON = 3,
    EM_PRINT_TYPE_PRESS_ENTER = 4,
    EM_PRINT_TYPE_ROOM = 5,
};

enum Tile
{
    Unused = ' ',
    Floor = '.',
    Corridor = ',',
    Wall = '#',
    ClosedDoor = '+',
    OpenDoor = '-',
    UpStairs = '<',
    DownStairs = '>'
};

enum Direction
{
    North,
    South,
    West,
    East,
    DirectionCount
};

struct Rect
{
    int x, y;
    int width, height;
};


#ifndef interface
#define interface struct
#endif

#define CDugIns CDungeonCreator::Instance()



#endif // COMMON_H

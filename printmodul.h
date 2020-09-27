#ifndef CPRINTMODUL_H
#define CPRINTMODUL_H

#include "common.h"

#define     MAX_DEF_FIRST       ("+----I----+")
#define     MAX_DEF_SECOND      ("+---------+")
#define     MAX_DEF_THREE       ("|         |")
#define     MAX_DEF_FOUR        ("|         >")
#define     MAX_DEF_FIVE        ("<         X")
#define     MAX_DEF_SIX         ("X   M L   |")
#define     MAX_DEF_SEVENT      ("+----v----+")
#define     MAX_DEF_EIGHT       ("+----^----+")
#define     MAX_DEF_NINE        ("+----@----+")
#define     MAX_DEF_TEN         ("<   M*    |")

struct PRINT_ROOM
{
    std::string str1;
    std::string str2;
    std::string str3;
    std::string str4;
    std::string str5;
};

class CPrintModul
{
public:
    CPrintModul();
    ~CPrintModul();
    void printStart();

private:

};

#endif // CPRINTMODUL_H

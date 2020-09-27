#include <random>
#include <vector>
#include <iostream>
#include <QCoreApplication>
#include "dungeon.h"


int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    CDungeon dungeon;
    return dungeon.run();
//    return a.exec();
}


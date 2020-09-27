#ifndef CRANDOM_H
#define CRANDOM_H

#include "common.h"

class CRandom
{
public:
    CRandom();
    int randomInt(int exclusiveMax);
    int randomInt(int min, int max);
    bool randomBool(double probability = 0.5);

private:
    std::random_device rd;
    std::mt19937 mt{rd()};

};

#endif // CRANDOM_H

#include "random.h"

CRandom::CRandom()
{

}

int CRandom::randomInt(int exclusiveMax)
{
    std::uniform_int_distribution<> dist(0, exclusiveMax - 1);
    return dist(mt);
}

int CRandom::randomInt(int min, int max)
{
    std::uniform_int_distribution<> dist(0, max - min);
    return dist(mt) + min;
}

bool CRandom::randomBool(double probability)
{
    std::bernoulli_distribution dist(probability);
    return dist(mt);
}

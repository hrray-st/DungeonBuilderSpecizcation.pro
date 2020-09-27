#ifndef CPRINT_H
#define CPRINT_H

#include <QString>


class CPrint
{
public:
    CPrint();
    ~CPrint();

    void welcome();
//    *Press Enter to continue*
    void pressEnterContinue();
    void printRoom();
    void enterChose();
    void printForIndex(int index);

private:

};

#endif // CPRINT_H

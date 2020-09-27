#include "common.h"
#include "print.h"

static std::string strExample = "Example Dungeon Level\n\n"
                                "+----I----+  +---------+  +---------+\n"
                                "|         |  |         |  |         |\n"
                                "|         >--<         X--X   M L   |\n"
                                "|         |  |         |  |         |\n"
                                "+----v----+  +----v----+  +----v----+\n"
                                "     |            |            |     \n"
                                "+----v----+  +----^----+  +----@----+\n"
                                "|         |  |         |  |         |\n"
                                "|         >-->   M L   >--<         |\n"
                                "|         |  |         |  |         |\n"
                                "+----X----+  +---------+  +---------+\n"
                                "     |            |                  \n"
                                "+----X----+  +---------+  +---------+\n"
                                "|         |  |         |  |         |\n"
                                "|    L    @--@         >--<   M*    |\n"
                                "|         |  |         |  |         |\n"
                                "+----v----+  +---------+  +---------+\n";

static std::string printCmd[] = {"Welcome to: So you built your first dungeon? Well then, build another!\n"
                 "\t\t\t\t\tDeveloped by Matt Selway\n"
                 "\t\t\tCOMP 3023 Software Development with C++\n",
                  "What would you like to do?\n"
                  "\t(g)enerate the example level\n"
                  "\t(r)andom dungeon level\n"
                  "\t(q)uit\n",
                  "Creating Example Dungeon Level...\n"
                  "Dungeon level created!\n\n"
                  "What would you like to do?\n"
                  "\t(d)escribe the dungeon level\n"
                  "\t(v)iew the dungeon level\n"
                  "\t(r)eturn to the main menu\n",
                  "Example Dungeon Level\n"
                  "Size: 3 x 3\n"
                  "Type: Dark Cave (Basic Dungeon)\n\n"
                  "What would you like to do?\n"
                  "\t(d)escribe a room\n"
                  "\t(r)eturn to previous menu\n",
                  "\n*Press Enter to continue*\n",
                  "\nWhich room would you like to describe? (1-9)\n",
                  strExample
                    };




CPrint::CPrint()
{
//    std::cout << strExample;
}

CPrint::~CPrint()
{

}

void CPrint::welcome()
{
    std::cout << printCmd[EM_PRINT_TYPE_WELCOME] << std::endl;
}

void CPrint::pressEnterContinue()
{
    std::cout << printCmd[EM_PRINT_TYPE_PRESS_ENTER] << std::endl;
}

void CPrint::printRoom()
{
    std::cout << strExample;
}

void CPrint::enterChose()
{
    std::cout << printCmd[EM_PRINT_TYPE_CREATING];
}

void CPrint::printForIndex(int index)
{
    if(index > 6) {
        return;
    }
    std::cout << printCmd[index];
}

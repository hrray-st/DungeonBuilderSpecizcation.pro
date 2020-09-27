#include "roomdisplay.h"

static std::string printDisplay[][5] = {{"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\nThere is a Goblin to fight.\nThere is a Short Sword to pick up."},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"},
                                        {"A dark and empty chamber. (Rock Chamber)\n", "the entrance to the dungeon level.\n", "an Open Doorway to another chamber.\n","an Open Doorway to another chamber.\n", "a Rock Wall.\n"}
                                       };

CRoomDisplay::CRoomDisplay()
{

}

CRoomDisplay::~CRoomDisplay()
{

}

void CRoomDisplay::printRoom(int num)
{
//    Room *1* is...
//    A dark and empty chamber. (Rock Chamber)
//    To the NORTH is the entrance to the dungeon level.
//    To the SOUTH is an Open Doorway to another chamber.
//    To the EAST is an Open Doorway to another chamber.
//    To the WEST is a Rock Wall.
    std::cout << "Room *" << num << "is..." << std::endl;
    std::cout << printDisplay[num][0];
    std::cout << "To the NORTH is " << printDisplay[num][1];
    std::cout << "To the SOUTH is " << printDisplay[num][2];
    std::cout << "To the EAST is " << printDisplay[num][3];
    std::cout << "To the WEST is " << printDisplay[num][4];

}

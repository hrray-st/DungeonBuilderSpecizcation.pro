#include "dungeoncreator.h"

CDungeonCreator* CDungeonCreator::m_instance = nullptr;

CDungeonCreator::CDungeonCreator()
    : m_gameDataMgr(nullptr)
{

}

CDungeonCreator::~CDungeonCreator()
{
    if(m_gameDataMgr != nullptr) {
        delete m_gameDataMgr;
        m_gameDataMgr= nullptr;
    }
}

CDungeonCreator *CDungeonCreator::Instance()
{
    if(m_instance == nullptr) {
        m_instance = new CDungeonCreator();
    }
    return m_instance;
}

void CDungeonCreator::Release()
{
    if(m_instance != nullptr) {
        delete m_instance;
        m_instance = nullptr;
    }
}

void CDungeonCreator::startGame()
{
    m_print.welcome();
    m_print.pressEnterContinue();
}

void CDungeonCreator::enterGame()
{
    m_print.enterChose();
}

void CDungeonCreator::runGame(int index)
{
    m_print.printForIndex(index);
}

void CDungeonCreator::setGameWidthHeight(int width, int height)
{
    m_gameDataMgr = new CGameDataMgr(width, height);
}

void CDungeonCreator::setFloor(int floor)
{
    m_gameRecord.setFloor(floor);
}

int CDungeonCreator::getFloor()
{
    return m_gameRecord.getFloor();
}

bool CDungeonCreator::judgeCmd(std::string strIn)
{
    return m_gameRecord.judgeCmd(strIn);
}

void CDungeonCreator::enterContinue()
{
    m_print.pressEnterContinue();
}



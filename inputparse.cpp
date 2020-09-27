#include "inputparse.h"
#include "dungeoncreator.h"
#include "common.h"

CInputParse::CInputParse()
{

}

bool CInputParse::inputCmp(QString qstrCmd)
{
    return CDugIns->judgeCmd(qstrCmd.toStdString());
}

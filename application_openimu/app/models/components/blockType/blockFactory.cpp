#include "blockFactory.h"
#include "addBlock.h"
#include "subBlock.h"
#include "mulBlock.h"
#include "divBlock.h"
#include "podometerblock.h"
#include "activitytrackerblock.h"

BlockFactory::BlockFactory()
{
}

Block* BlockFactory::createBlockType(std::string blockType)
{
    if(blockType == "add")
    {
        return new AddBlock();
    }
    else if(blockType == "sub")
    {
        return new SubBlock();
    }
    else if(blockType == "mul")
    {
        return new MulBlock();
    }
    else if(blockType == "div")
    {
        return new DivBlock();
    }
    else if(blockType == "podo")
    {
        return new PodometerBlock();
    }
    else if(blockType == "activity"){
        return new ActivityTrackerBlock();
    }
}
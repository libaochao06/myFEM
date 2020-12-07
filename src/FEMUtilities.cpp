#include "FEMUtilities.h"

namespace Model
{
    int getElementTypeLength(std::string type)
    {
        int value=0;
        ElementType iType = elTypes.at(type);
        switch (iType)
        {
        case ElementType::S4R :
            value=4;
            break;
        case ElementType::S3R :
            value=3;
            break;
        case ElementType::C3D4 :
            value=4;
            break;
        case ElementType::C3D8R :
            value=8;
            break;
        default:
            break;
        }
        return value;
    }
};
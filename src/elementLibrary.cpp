#include "elementLibrary.h"

namespace Model
{
    const std::map<std::string, ElementType> elTypes=
    {
        {"S4R", ElementType::S4R}, {"S3R", ElementType::S3R}, {"C3D4", ElementType::C3D4}, {"C3D8R", ElementType::C3D8R}
    };
};
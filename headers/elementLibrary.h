#ifndef ELEMENTLIBRARY_H_
#define ELEMENTLIBRARY_H_

#include <map>
#include <string>

namespace Model
{
    enum class ElementType
    {
        S4R, S3R, C3D4, C3D8R
    };
    
    extern const std::map<std::string, ElementType> elTypes;
};
#endif
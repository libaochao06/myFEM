#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>
#include <vector>

using std::string;

namespace Model
{
    class Element
    {
    public:
        //单元编号，值应唯一
        unsigned int label;
        //单元类型
        string type;
        //单元节点数组，根据不同单元类型进行初始化
        int *nodes;
        //单元节点数组长度
        int nodeLen;
    public:
        Element(unsigned int iLabel, string iType);
        Element(unsigned int iLabel, string iType, const int *iNodes);
        Element(unsigned int iLable, string iType, const std::vector<int> &iNodes);
        Element(const Element &iEl);
        ~Element();
        Element &operator=(const Element &iEl);

    };

};





#endif
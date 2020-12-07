#include "element.h"
#include "FEMUtilities.h"

namespace Model
{
    Element::Element(unsigned int iLabel, string iType)
    :label(iLabel), type(iType)
    {
        nodeLen=getElementTypeLength(type);
        nodes =new int[nodeLen];
        for(int i=0; i<nodeLen; i++)
        {
            nodes[i]=0;
        }
    }

    Element::Element(unsigned int iLabel, string iType, const int *iNodes)
    :label(iLabel), type(iType)
    {
        nodeLen=getElementTypeLength(type);
        nodes= new int[nodeLen];
        for(int i=0;i<nodeLen;i++)
        {
            nodes[i]=iNodes[i];
        }
    }

    Element::Element(unsigned int iLabel, string iType, const std::vector<int> &iNodes)
    :label(iLabel), type(iType)
    {
        nodeLen=getElementTypeLength(type);
        nodes=new int[nodeLen];
        for(int i=0; i<nodeLen; i++)
        {
            nodes[i]=iNodes.at(i);
        }
    }
    Element::Element(const Element &iEl)
    :label(iEl.label), type(iEl.type), nodeLen(iEl.nodeLen)
    {
        nodes= new int[nodeLen];
        for(int i=0;i<nodeLen;i++)
        {
            nodes[i]=iEl.nodes[i];
        }
    }
    Element::~Element()
    {
        delete [] nodes;
    }

    Element & Element::operator=(const Element &iEl)
    {
        if(this==&iEl)
            return *this;
        delete [] nodes;
        label=iEl.label;
        type=iEl.type;
        nodeLen=iEl.nodeLen;
        for(int i=0;i<nodeLen;i++)
        {
            nodes[i]=iEl.nodes[i];
        }
        return *this;
    }
};
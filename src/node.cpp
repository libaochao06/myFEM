#include "node.h"

namespace Model
{
    Node::Node(unsigned int iLabel, const Coordinate &iCoord)
    :label(iLabel), coordinate(iCoord)
    {
    }
    
    Node::Node(const Node &n)
    :coordinate(n.coordinate)
    {
        label=n.label;
    }

    Node& Node::operator=(const Node &n)
    {
        label=n.label;
        coordinate=n.coordinate;

        return *this;
    }

    Node::~Node()
    {}
}
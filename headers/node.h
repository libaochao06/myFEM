#ifndef NODE_H_
#define NODE_H_
#include "coordinates.h"
#include <string>

namespace Model
{
    using namespace std;
    class Node
    {
        public:
        Node(unsigned int iLabel, const Coordinate& iCoord);
        Node(const Node &n);
        Node & operator=(const Node &n);
        ~Node();

        public:
        unsigned int label;
        Coordinate coordinate;
    };
};

#endif
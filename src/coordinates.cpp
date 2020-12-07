#include "coordinates.h"
#include <iostream>

namespace Model
{
    Coordinate::Coordinate(double x, double y, double z)
    {
        len=3;
        coord[0]=x;
        coord[1]=y;
        coord[2]=z;
    }

    Coordinate::Coordinate(const Coordinate &cd)
    {
        len=cd.len;
        coord[0]=cd.coord[0];
        coord[1]=cd.coord[1];
        coord[2]=cd.coord[2];
    }

    Coordinate::Coordinate(double cd[], int iLen)
    {
        if(iLen<0|| iLen>2)
            throw "Out of range";
        len=iLen;
        for(int i=0;i<iLen;i++)
        {
            coord[i]=cd[i];
        }
    }

    Coordinate::Coordinate(double x, double y)
    {
        len=2;
        coord[0]=x;
        coord[1]=y;
        coord[2]=0;
    }

    Coordinate::Coordinate(double x)
    {
        len=1;
        coord[0]=x;
        coord[1]=0;
        coord[2]=0;
    }

    double & Coordinate::operator[](short index)
    {
        if(index<0|| index>len-1)
            throw "Out of range";
        switch (index)
        {
        case 0:
            return coord[0];
            break;
        case 1:
            return coord[1];
            break;
        case 2:
            return coord[2];
            break;
        default:
            throw "Invalid index";
            break;
        }
    }

    const double & Coordinate::operator[](short index) const
    {
        if(index<0|| index>len-1)
            throw "Out of range";
        switch (index)
        {
        case 0:
            return coord[0];
            break;
        case 1:
            return coord[1];
            break;
        case 2:
            return coord[2];
            break;
        default:
            throw "Invalid index";
            break;
        }
    }

    Coordinate & Coordinate::operator=(const Coordinate &iCoord)
    {
        for(int i=0;i<iCoord.len;i++)
        {
            coord[i]=iCoord.coord[i];
        }
        return *this;
    }

    void Coordinate::showContent()
    {
        for(int i=0;i<len;i++)
        {
            std::cout<<coord[i]<<'\t';
        }
        std::cout<<std::endl;
    }
}
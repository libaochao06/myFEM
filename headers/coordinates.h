#ifndef COORDINATES_H_
#define COORDINATES_H_

namespace Model
{
    class Coordinate
    {
        public:
        Coordinate(double x, double y, double z);
        Coordinate(double x, double y);
        Coordinate(double x);
        Coordinate(const Coordinate &cd);
        Coordinate(double cd[], int iLen);
        double& operator[](short index);
        const double &operator[](short index) const;
        Coordinate &operator=(const Coordinate &iCoord);
        void showContent();
        ~Coordinate(){};

        private:
        short len;
        double coord[3];
    };
};

#endif
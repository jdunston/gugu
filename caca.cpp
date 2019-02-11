#include "../include/Circle.h"
#include "../include/util.h"

using namespace util;

Circle::Circle(Coord position, double radius):
    Shapes(position), radius(radius)
{

}

Circle::~Circle()
{
    //dtor
}

void Circle::Draw (std::ofstream &m_ostrm)
{


    m_ostrm << "<circle "
            << attrib("cx", 80)
            << attrib("cy", 80)
            << attrib("ry",  50)
            << attrib("fill", "white")
            << attrib("transform" , "matrix(0.866, -0.5, 0.25, 0.433, 80, 80)")
            << "/>\n";



}

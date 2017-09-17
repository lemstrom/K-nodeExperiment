// Commenting out all Qt generated stuff I won't be needing for this

/*#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


struct Point
{
    int x;
    int y;

    double distanceFrom (int refX, int refY)
    {
        // sqrt ((x_a - x_b)^2 + (y_a - y_b)^2)
        // sqrt() takes its arguments as doubles
        return sqrt(static_cast <double> ((refX - x) * (refX - x)) + static_cast <double> ((refY - y) * (refY - y)));
    }
};

int main ()
{
    Point a = {0,0};
    Point b = {5,5};
    return 0;
}

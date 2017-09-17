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

using std::list;
using std::cout;
using std::endl;


struct Point
{
    int x;
    int y;

    double distanceFrom (int refX, int refY)
    {
        return 0.0;
    }
};

int main ()
{
    return 0;
}

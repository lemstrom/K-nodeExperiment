// Commenting out all the Qt generated stuff I won't be needing for this

/*#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
*/

#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

struct Point_double
{
    double x;
    double y;
};

struct Point
{
    int x;
    int y;

    double distanceFrom (Point_double ref)
    {
        return hypot((ref.x - static_cast <double> (x)), (ref.y - static_cast <double> (y)));
    }
};



void assignNodes(vector <Point>& nodes, vector<Point> &nodesA, vector<Point> &nodesB, Point_double& a, Point_double& b);
Point_double calculateMeans(vector<Point>& nodes);

int main ()
{
    Point_double a = {0.0,0.0};
    Point_double b = {5.0,5.0};
    vector <Point> nodes = {
        {1,1},{1,2},{1,3},{1,4},
        {2,1},{2,2},{2,3},{2,4},
        {3,1},{3,2},{3,3},{3,4},
        {4,1},{4,2},{4,3},{4,4},
        {5,1},{5,2},{5,3},{5,4}};
    vector <Point> nodesA;
    vector <Point> nodesB;

    assignNodes(nodes, nodesA, nodesB, a, b);
    a = calculateMeans(nodesA);
    b = calculateMeans(nodesB);

    cout << "A is now at " << a.x << ", " << a.y << endl;
    cout << "B is now at " << b.x << ", " << b.y << endl;
    cout << "A has " << nodesA.size() << " nodes" << endl;
    cout << "B has " << nodesB.size() << " nodes" << endl;
    return 0;
}

void assignNodes(vector <Point>& nodes, vector <Point>& nodesA, vector <Point>& nodesB, Point_double& a, Point_double& b)
{
    for(Point ref: nodes)
    {
        if (ref.distanceFrom(a) <= ref.distanceFrom(b))
        {
            nodesA.push_back(ref);
        }
        else
        {
            nodesB.push_back(ref);
        }
    }
}

Point_double calculateMeans (vector<Point>& nodes)
{
    int cumulativeX = 0;
    int cumulativeY = 0;
    Point_double result = {0.0,0.0};

    for(Point ref: nodes)
    {
        cumulativeX += ref.x;
        cumulativeY += ref.y;
    }
    result.x = static_cast <double> (cumulativeX / nodes.size());
    result.y = static_cast <double> (cumulativeY / nodes.size());
    return result;
}

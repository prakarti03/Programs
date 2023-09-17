// distance between coordinates
#include <iostream>
#include <cmath>
using namespace std;

class point2;
class point1
{
    int x1;
    int y1;

public:
    friend void distance(point1, point2);
    point1(int, int);
};
point1::point1(int p, int q)
{
    x1 = p;
    y1 = q;
}

class point1;
class point2
{
    int x2;
    int y2;

public:
    point2(int, int);
    friend void distance(point1, point2);
};
point2::point2(int i, int j)
{
    x2 = i;
    y2 = j;
}
void distance(point1 o1, point2 o2)
{
    cout << "the distance between given coordinates are: " << sqrt(((o2.x2 - o1.x1) * (o2.x2 - o1.x1)) + ((o2.y2 - o1.y1) * (o2.y2 - o1.y1)));
}
int main()
{
    point1 w(4, 3);

    point2 z(0, 0);

    distance(w, z);
    return 0;
}
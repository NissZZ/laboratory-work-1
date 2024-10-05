#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, ab, bc, ca;
    cout << "enter the coordinates for point A" << endl;
    cin >> x1;
    cin >> y1;
    cout << "enter the coordinates for point B" << endl;
    cin >> x2;
    cin >> y2;
    cout << "enter the coordinates for point  C" << endl;
    cin >> x3;
    cin >> y3;
    ab = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
    bc = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), 0.5);
    ca = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
    x4 = (bc * x1 + ca * x2 + ab * x3) / (bc + ca + ab);
    y4 = (bc * y1 + ca * y2 + ab * x3) / (bc + ca + ab);
    cout << "coordinates of the center of the inscribed circle" << endl;
    cout << "x4 = " << x4 << endl;
    cout << "y4 = " << y4 << endl;
    return 0;
}

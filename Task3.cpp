#include <iostream>
#include <ctime>

const double PI = 3.14159;
using namespace std;
int main() {
    double radius1, radius2;
    double area1, area2;

    cout << "Please give the radius as an input: " << endl;
    cin >> radius1 >> radius2;

    area1 = radius1 * radius1 * PI;
    cout << "Area of a circle with radius " << radius1 << " is : " << area1 << endl;

    area2 = radius2 * radius2 * PI;
    cout << "Area of a circle with radius " << radius2 << " is : " << area2 << endl;

    cout << "compute the area of a Circle" << endl;
    cout << "Area of Radius 3 = 3*3*3.14" << (3*3*3.14) << endl;

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;


    return 0;
}

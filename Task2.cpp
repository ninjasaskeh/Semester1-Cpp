#include <iostream>
#include <ctime>

using namespace std;
int main() {
    double radius1, radius2;
    double area1, area2;

    cout << "Please give the radius as an input: " << endl;
    cin >> radius1 >> radius2;

    area1 = radius1 * radius1 * 3.14159;
    cout << "Area of a circle with radius " << radius1 << " is : " << area1 << endl;

    area2 = radius2 * radius2 * 3.14159;
    cout << "Area of a circle with radius " << radius2 << " is : " << area2 << endl;


    return 0;
}
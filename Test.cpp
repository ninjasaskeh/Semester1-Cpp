#include <iostream>
using namespace std;
int main()
{
      cout << "compute the area of a Circle" << endl;
      cout << "Area of Radius 3 = 3*3*3.14" << (3*3*3.14) << endl;
      cout << "-----------------------------------------" <<endl;
      cout << "Arief Maizaki: " <<endl;
      cout << "Student ID: 001202200147" <<endl;
      time_t currtime = time(0);
      char *mytime = ctime(&currtime);
      cout << "Date and Time " << endl;
      cout << mytime << endl;

}
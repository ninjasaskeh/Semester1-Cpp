#include <iostream>
#include <ctime>

using namespace std;
int main() {

    cout << "Please input your fahrenheit to be converted to celcius: " << endl;
    double fahrenheit;
    cin >> fahrenheit;

    double celcius;
    celcius = (5.0)/9 * (fahrenheit - 32);
    cout << fahrenheit << " Fahrenheit converted to celcius: " << celcius << endl;

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;
}
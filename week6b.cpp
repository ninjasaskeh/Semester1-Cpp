#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    //1. Initialization
    double sum = 0;
    //repeat calculation of 0.01, 0.02, ..., until reaching 1.0
i+0.01)
    {
        sum += i;
        cout << "Sum of :" << i << "is " << sum << endl;
    }

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;
    return 0;
}
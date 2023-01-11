#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int sum(int i1, int i2)
{
    int sum = 0;
    for (int i = i1; i < i2; i++)
        sum += i;
    return sum;
}

int main()
{
    cout << "Sum from 1 to 10 is" << sum (1, 10) << endl;
	cout << "Sum from 20 to 37 is" << sum (20, 37) <<endl;
	cout << "Sum from 35 to 49 is" << sum (35, 49) << endl;

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;

    return 0;
}
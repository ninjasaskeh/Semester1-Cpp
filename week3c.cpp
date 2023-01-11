#include <iostream>
#include <ctime>

using namespace std;
int main() {
    cout << "Please input your student id: " << endl;
    int id;
    cin >> id;

    if(id %2==1)
    {
        cout << "Your student ID is ODD number" << endl;
    }
    else
    {
        cout << "Your student ID is Even number" << endl;
    }

     cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;
}
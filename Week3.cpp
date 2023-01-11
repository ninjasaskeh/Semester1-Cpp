#include <iostream>
#include <ctime>

using namespace std;
int main(){

    cout << "Please input your change amount in decimal, ex 11.56" << endl;
    double change;
    cin >> change;

    int remainder;
    remainder = static_cast<int>(change*100);

    int onedollar = remainder/100;
    remainder = remainder%100;
    cout << "You will get " << onedollar << " of one dollar bills" << endl;

    int quarter = remainder/25;
    remainder = remainder%25;
    cout << "You will get " << quarter << " of one dollar bills" << endl;

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;

}

#include <iostream>
#include <ctime>

using namespace std;
int main() {

    cout << "Please input your grade: " << endl;
    int grade;
    cin >> grade;

    if (grade >= 90)
    {
        cout << "Congratulation you got A!";
    }
    else if (grade >= 80)
    {
        cout << "Congratulation you got B!";
    }
    else
    {
        cout << "Cemas kau dek bek bek bek" << endl;
    }
    
    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;


    //if - else
    // if (grade > 90) {
    //     cout << "Congratulation you got A!" << endl;
    // }
    // else {
    //     cout << "Oopppsss, not an A." << endl;
    // }

    //one way if
    // if (grade > 90) {
    //     cout << "Congratulation you got A!" << endl;
    // }
}
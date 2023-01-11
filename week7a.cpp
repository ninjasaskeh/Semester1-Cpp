#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    //loop comp 1 : Initialization
    int counter = 0;
    int correctAnswer = 0;

    //loop comp 2 :Condition;
    while(counter < 10)
    //loop comp 3 :Body Statements
    {
        //generate 2 random numbers
        srand(time(0));
        int number1 = rand() % 10;
        int number2 = rand() % 10;

        //swap
        if (number1 < number2)
        {
            int temp = number1;
            number1 = number2;
            number2 = temp;
        }
        cout << "Questions No." << counter+1 << endl;
        cout <<  "What is " << number1 << " - " << number2 << endl;
        int answer;
        cin >> answer;

        if (number1-number2 == answer)
        {
            cout << "KELAZZZZZ!!!!" << endl;
            correctAnswer++;
            if (correctAnswer == 5) break;
        }
        else
        {
            cout << "TUTOR DEK, dia " << number1-number2 << endl;
        }

        counter++;
           
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
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
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
    
    cout <<  "What is " << number1 << " - " << number2 << endl;
    int answer;
    cin >> answer;

    if (number1-number2 == answer)
    {
        cout << "KELAZZZZZ!!!!" << endl;
    }
    else
    {
        cout << "TUTOR DEK, dia?" << number1-number2 << endl;
    }

    return 0;
}
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //.1 Random number
    srand(time(0));
    int number = rand() % 101;

    // 2. Ask the user to guess
    cout << "Guess a number between 0 to 100" << endl;

    // 3. while the answer is not correct, keep looping
    int guess = -1;
    while (guess != number)
    {
        cout << "Please input your guess: " << endl;
        cin >> guess;

        if(guess == number)
            cout << "Congratulations! Its " << number << endl;
        else if(guess > number)
            cout << "Your guess is too high." << endl;
        else
            cout << "Your guess is too low." << endl;
    }

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;
}
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    cout << "Welcome to the Greatest Common Divisor!" << endl;
    cout << "Enter 2 numbers: " << endl;
    int n1, n2;
    cin >> n1 >> n2;  

    int gcd = 1; // min gdc is 1
    int k = 1; // while counter
    while (k <= n1 && k <= n2)
    {
        if (n1 % k == 0 && n2 % k == 0)
            {
                gcd = k;
                
            }
            k++;
        
    }
    cout << "GCD of " << n1 << "and " << n2 << " is " << gcd << endl;

    cout << "-----------------------------------------" <<endl;
    cout << "Arief Maizaki: " <<endl;
    cout << "Student ID: 001202200147" <<endl;
    time_t currtime = time(0);
    char *mytime = ctime(&currtime);
    cout << "Date and Time " << endl;
    cout << mytime << endl;
    return 0;
}
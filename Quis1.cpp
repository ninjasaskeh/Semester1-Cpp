#include <iostream>
#include <ctime>

using namespace std;
int main() 
{
    cout << "Are you a PresUnivers? Y/N. " << endl;
    char answer; // can only hold one characterr
    cin >> answer;

    if ((answer == 'Y') || (answer == 'y'))
    {
        cout << "Press 1. For IT Student, or 2. for non IT." << endl;
        int prodi;
        cin >> prodi;

            if(prodi == 1)
            {
                cout << "Welcome to Program study IT." << endl;
            }
            else
            {
                cout << "What prodi you are interested is?" << endl;
                cout << "press 1. to IS, Press 2 to VCD" << endl;
                cin >> prodi;

                if(prodi == 1)
                {
                    cout << "Welcome  to Program study of IS" << endl;
                }
                else
                {
                    cout << "Welcome to Program study of VCD" << endl;
                }
            }
    }
    else
    {
        cout << "Good Bye" << endl;
    }
}
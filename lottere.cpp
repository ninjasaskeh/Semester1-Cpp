#include <iostream>
using namespace std;
int main()
{
  int firstrandomnumber,secondrandomnumber,thirdrandomnumber;
  int firstguessnumber, secondguessnumber, thirdguessnummber;
  srand((unsigned)time(NULL));
  cout << endl << " Please enter your first guess number: ";
  cin >> firstguessnumber;
  cout  << " Please enter your second guess number: ";
  cin >> secondguessnumber;
  firstrandomnumber= rand () %10;
  secondrandomnumber = rand () %10;
  cout << endl << " Your first random number is : " << firstrandomnumber << "." << endl;
   cout << " Your secod random number is : " << secondrandomnumber << "." << endl;
  if (firstguessnumber==firstrandomnumber && secondguessnumber == secondrandomnumber)
  {
    cout << endl << "That's exact match, you won grand price of 10000$ " << endl;}
  else if (firstguessnumber == firstrandomnumber || secondguessnumber == firstrandomnumber && firstguessnumber== secondrandomnumber || secondguessnumber == secondrandomnumber)
  {
    cout << endl <<"You matched the digits, you won $3000." << endl;
  }
  else if ( firstguessnumber == firstrandomnumber || secondguessnumber == firstrandomnumber || firstguessnumber== secondrandomnumber || secondguessnumber == secondrandomnumber)
  {
    cout << endl <<" You matched one digit, you won 1000$" << endl;
    }
  else if (firstguessnumber!= firstrandomnumber && secondguessnumber != firstrandomnumber && firstguessnumber != secondrandomnumber && secondguessnumber != secondrandomnumber)
  {
    cout << endl <<" None of them were correct, you lost." << endl;}
}
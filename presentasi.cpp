#include <iostream>
#include <ctime>
using namespace std;
// void age (int py, int by)
// {}
int main()
{

string item [10][2] = {
	{"Oat Drip","Rp.130.000"},
	{"Foom Liquid","Rp.125.000"},
	{"Juta Ice","Rp.110.000"},
	{"Kaze Liquid","Rp.135.000"},
	{"Nasty Juice","Rp.135.000"},
	{"Tokyonarilla","Rp.115.000"},
	{"Juice Cartel","Rp.95.000"},
	{"Indo Brew","Rp.120.000"},
	{"NYX Liquid","Rp.90.000"},
	{"DistrictOne","Rp.85.000"}
	};
char fname[30];
int ans = 0, buy;
cout << "Input your First Name: " << endl;	
cin >> fname;

int day, month, year;

 struct tm date = {0};
 cout<<"Enter Your Date of Birth Year: " << endl;
 cin>>year;
 date.tm_year = year-1900;
 time_t normal = mktime(&date);
 time_t current;
 time(&current);

 int age = (difftime(current, normal) + 86400L/2) / 86400L;
 cout<<"You are "<<age/365<<" years old. " "Enter the amount of liquid you want to check :";
 cin>>buy;
	cout<<endl;
 
 	for (int i=0; i<buy;i++){
 
 	cout<<"Input Liquid No :"<<i+1<<endl;
	do {
	if (age/365 >= 21) {
	cout << "1. " << item [0][0] << endl;
	cout << "2. " << item [1][0] << endl;
	cout << "3. " << item [2][0] << endl;
	cout << "4. " << item [3][0] << endl;
	cout << "5. " << item [4][0] << endl;
	cout << "6. " << item [5][0] << endl;
	cout << "7. " << item [6][0] << endl;
	cout << "8. " << item [7][0] << endl;
	cout << "9. " << item [8][0] << endl;
	cout << "10. " << item [9][0] << endl;
	int programs;
	cin >> programs;
	switch (programs)
	{
	case 1:
	ans = 0;
        cout << fname << " Your choice is : " << item [0][0] << " " << item [0][1] << endl;
        break;
	case 2:
	ans = 0;
        cout << fname << " Your choice is : " << item [1][0] << " " << item [1][1] << endl;
        break;
	case 3:
	ans = 0;
        cout << fname << " Your choice is : " << item [2][0] << " " << item [2][1] << endl;
        break;
	case 4:
	ans = 0;
        cout << fname << " Your choice is : " << item [3][0] << " " << item [3][1] << endl;
        break;
	case 5:
	ans = 0;
        cout << fname << " Your choice is : " << item [4][0] << " " << item [4][1] << endl;	
        break;
	case 6:
	ans = 0;
        cout << fname << " Your choice is : " << item [5][0] << " " << item [4][1] << endl;	
        break;
	case 7:
	ans = 0;
        cout << fname << " Your choice is : " << item [6][0] << " " << item [4][1] << endl;	
        break;
	case 8:
	ans = 0;
        cout << fname << " Your choice is : " << item [7][0] << " " << item [4][1] << endl;	
        break;
	case 9:
	ans = 0;
        cout << fname << " Your Order is : " << item [8][0] << " " << item [4][1] << endl;	
        break;
	case 10:
	ans = 0;
        cout << fname << " Your choice is : " << item [9][0] << " " << item [4][1] << endl;	
        break;
	default:
	ans = 1;
        cout << "Please enter the numbers listed based on the list provided (1-10)" << endl;
        break;
	}  
	} else {
	    cout << "Sorry you are not old enough to buy the available liquid, you must be above 21 years old" << endl;
	}
	
	} while (ans);
 		
 	}
 return 0;

}
//Setup
#include <iostream>
#include <cstdlib>
using namespace std;

//Main Routine
int main ()

{
	//Initialize Variables
	int num1,num2,ac_sum,user_sum;
	
	//Determine 1 & 2
	num1 = (rand()%900)+100;
	num2 = (rand()%900)+100;
	
	//Output and gather user inputs
	cout << "\n   " << num1 << endl;
	cout << " + " << num2 << endl;
	cout << "_____\n";
	cout << "\n\nEnter the sum: ";
	cin >> user_sum;
	
	//Calculate
	ac_sum = num1+num2;
	
	//Compare & Output
	if(user_sum == ac_sum)
		cout << "\nYou are correct!\n"<< endl;
	else cout << "\nWrong, the sum is " << ac_sum << "\n" << endl;
	
}


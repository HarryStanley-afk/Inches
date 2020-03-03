#include <iostream>

using namespace std;

void Convert(int inch)
{
	int feet, inches;
	inches = inch %12;
	feet = inch/12;
	cout << "\n\t\tThe length in feet is " << feet << "\'" << inches << "\" " << endl;
}

int main ()
{
int htInches;
// Ask length from user
cout << "\n\n\t\tEnter length in Inches ";
cin >> htInches;

Convert( htInches);
cout << "\n\n\n\t\t";
return 0;
}

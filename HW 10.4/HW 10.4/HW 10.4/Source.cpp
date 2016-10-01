////
// Silvia Moreno
// CS-172-1
// HW 10.4 "Sort Characters in a string"
// 9/29/16
////

#include <iostream>
#include <string> // allows strings to be used.
using namespace std;
string sort(string&s){ //parameter calls string and the variable s
	for (int i = s.length() - 1; i > 1; i--) //for loop allows to see which letter is higher or maximum than the other letter
	{
		char high = s[0]; //s is initialized to 0
		int highIndex = 0;
		for (int j = 1; j < i; j++) //for loop to order the letters
		{
			if (high < s[j]) { //if high is higher than s of j then set it equal to j
				high = s[j];
				highIndex = j;
			}
		}
		if (high != s[i]) // if it doesnt equal to s of i then it changes the order of the letters.
		{
			s[highIndex] = s[i];
			s[i] = high;
		}
	}

	return s; //returns s back to main
}
int main() {
	string s; //reinitializing the variable s 
	cout << "Enter a string. ";
	getline(cin, s); //allows user to input the string
	cout << endl;
	cout << "The sorted string is: " << sort(s) << endl; //calls the function and implements the string name into the function
	return 0;
}
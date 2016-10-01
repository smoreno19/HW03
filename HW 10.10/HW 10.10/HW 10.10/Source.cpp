////
// Silvia Moreno
// CS-172-1
// HW 10.10 "My Integer Class"
// 9/29/16
////

#include <iostream>
#include <string>
#include <sstream> //allows the change of string to number to function
using namespace std;

class MyInteger {
public:
	int value; //variable is public so it can be used within the class


	MyInteger(int Value) //constructor that is equal to a value.
	{
		value = Value;
	}
	int getValue()const {
		return value; //gets the value and returns it 
	}
	bool isEven() const{
		return isEven(value);
	}	
	static bool isEven(int n) {
		return n % 2 == 0; // checks if the number is even
	}
	static bool isEven(const MyInteger& n) {
		return isEven(n.getValue()); //returns the answer to the getvalue funtion
	}

	bool isPrime() const
	{
		return isPrime(value);
	}
	static bool isPrime(int Number) {
		if ((Number == 1) || (Number == 2)) //if the number is 1 or 2 then it is prime
		{		return true; //returns true if the above is true
	}
		for (int i = 2; i < Number; i++)
		{
			if (Number % i)
				return false; //if the number is divisible by a number then it is not prime, returns false.
		}

			return true; 
	}
	static bool isPrime(const MyInteger& o) {
		return isPrime(o.getValue());
	}	
	bool isOdd() const {
		return isOdd(value);
	}
	static bool isOdd(int s) {
		return s %! 2 ==0; //checks whether or not the number is odd
	}
	static bool isOdd(const MyInteger&s) {
		return isOdd(s.getValue());
	}
	bool equals(int a) const {
		return value==a; //value is equal to a variable
	}
	bool equals(const MyInteger&t) {
		return value == t.getValue(); //value is equal to a variable calling the getvalue function
	}
	static int parseInt(const string&v) {
		stringstream ss;
		ss << 0; //stringstream is used to alter numbers into strings
		string s = ss.str();
	}
};
int main() {
	MyInteger i(4); // calls the constructor and initializes a variable to a value to be checked.
	cout << "Is the value even? " << i.isEven() << endl; //calls the function even and works it through to see if the number is even
	cout << "Is the value prime? " << i.isPrime() << endl;
	cout << "Is the value odd? " << i.isOdd() << endl;

	return 0;

}
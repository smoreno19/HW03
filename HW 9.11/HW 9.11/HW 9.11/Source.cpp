////
// Silvia Moreno
// CS-172-1
// HW 9.11 "The Even Number" 
// 9/29/16
////

#include <iostream>
using namespace std;

class EvenNumber {
public:
	int value;
	EvenNumber() { //constructor
		value = 0; //value is set to 0
	}
	EvenNumber(int Value) {
		if (Value % 2 == 0)
		{ //is Value is divisible by 2 then it is even and if its true then it sets equal to value.
	value = Value;
		}

	}
	int getValue() {

		return value; // get the value and returns it 
	}
	int getNext() {
		return getValue() + 2; //adds two to the value to find the number after it

	}
	int getPrevious() {

		return getValue() - 2; //subtracts two to the value to find the number before it

	}
};
int main() {
	
	EvenNumber Value(16); //calls the class 

	cout << "The number Previous to the value is " << Value.getPrevious() << endl; //calls the function to find the number before the value
	cout << "The number After the value is " << Value.getNext() << endl;//calls the function to find the number after the value
	return 0;
}
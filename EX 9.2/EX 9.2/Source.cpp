////
// Silvia Moreno
// 09/26/16
// CS-172-1
// Fan Classes
////

#include <iostream>
using namespace std;

class Fan {
public: //variables are public so it can be used for the functions
	int speed;
	bool on = true; //initialized it to true as a default
	double radius;

	Fan() {
		speed = 1; //default speed is 1
		on = false; //default status is off	
		radius = 5; //default radius is 5
	}
	//constructor with new variables 
	Fan(int newSpeed, bool setOn, double newRadius)
	{
		speed = newSpeed; //speed is equal to the new variable
		on = setOn;
		radius = newRadius;
	}
};
int main()
{
	Fan Fan1; //calls the default fan
			  // outputs the properties of the default fan
	cout << "The properties of the default fan is: \n" << "Speed is " << Fan1.speed << "\nFan is " << Fan1.on << "\nAnd the radius is " << Fan1.radius << endl;
	cout << endl;
	Fan Fan2(3, true, 10); //initialize the variables in the order of the constructor
	Fan Fan3(2, false, 5);
	cout << "The properties of the second fan is: \n" << "Speed is " << Fan2.speed << "\nFan is " << Fan2.on << "\nAnd the radius is " << Fan2.radius << endl;
	cout << endl; //adds a space in between properties to be more clearer
	cout << "The properties of the second fan is: \n" << "Speed is " << Fan3.speed << "\nFan is " << Fan3.on << "\nAnd the radius is " << Fan3.radius << endl;
	return 0;
}

////
// Silvia Moreno
// CS-172-1
// 9/27/16
// HW 9.6 "Quadratic Equations"
////
#include <iostream>
#include <cmath>
using namespace std;
class QuadraticEquations {
private:
	int a;
	int b; //set the variables to private
	int c;
public:
	QuadraticEquations(double a, double b, double c) 
	:a(a), b(b), c(c){ //variables are set to the initialized variables in this contructor
	}
	double getA()
	{// getter to get the variable a and returns it
		return a;
	}
	double getB() {
		return b;
	}
	double getC() {
		return c;
	}
	double getDiscriminate()
	{ //function returns the formula for the discriminate
		return pow(b, 2) - 4 * a*c;
		
	}
	double getRoot1() {
		if (getDiscriminate() < 0)
		{ //if it is less than 0, answer will return 0 if not then it will show root 1
			return 0;
		}
		else
		return (-b + sqrt(getDiscriminate())) / 2 * a; //get root 1
		
	}
	double getRoot2() {
		if (getDiscriminate() < 0)
			return 0;
		else
			return (-b - sqrt(getDiscriminate())) / 2 * a; //get root 2
	
	}
};
int main() {
	double a, b, c,discriminate;//reinitialize the varaibles.
	cout << "Please enter values for a, b and c: ";
	cin >> a;
	cin >> b;
	cin >> c;
	QuadraticEquations Equation(a,b,c); //calls the constructor to main with adding the variables.
	discriminate= Equation.getDiscriminate(); 
	//gets the discriminate equation, sets it to discriminate to determine for the if and else statements

	if (discriminate >= 0)
	{// if the discriminate is more than 0 then it will show both roots
		cout << "The Roots are " << Equation.getRoot1() << " and " << Equation.getRoot2() << endl; 
	}
	else if (discriminate == 0)
	{ //equal to 0 then will show the first root
		cout << "The root is " << Equation.getRoot1() << endl;
	}
	else
		cout << "The equation has no real roots" << endl;

	return 0;
}
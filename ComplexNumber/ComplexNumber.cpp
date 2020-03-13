#include <iostream>
#include <string>

using namespace std;

class ComplexNumber {

public:
	ComplexNumber() { //Default Constructor.
		this->real = 0;
		this->imaginary = 0;
	}

	ComplexNumber(int number) { //integer number to complex number (int) Conversion Constructor.

		this->real = number;
		this->imaginary = 0;
	}

	ComplexNumber(double number) { // real number to complex number (double) Conversion Constructor.

		this->real = number;
		this->imaginary = 0;
	}

	ComplexNumber(int numberReal, int numberImag) { // string to complex number (string) Conversion Constructor.

		this->real = numberReal;
		this->imaginary = numberImag;
	}

	void setValue() {

		cout << "Real: ";
		cin >> this->real;
		cout << "Imaginary: ";
		cin >> this->imaginary;
	}

	void printNumber() {

		cout << this->real << " + " << this->imaginary << "i" << endl;

	}

private:
	double real;
	double imaginary;

};


int main() {

	ComplexNumber complexNumber1; // default constructor
	ComplexNumber complexNumber2{ 10 };
	ComplexNumber complexNumber3{ 10.60 };
	ComplexNumber complexNumber4{ 5, 9 };
	ComplexNumber complexNumber5;

	cout << endl << "-------------------Test / 1---------------------------------" << endl;
	complexNumber1.printNumber(); // real = 0 / imag = 0
	cout << endl << "------------------------------------------------------------" << endl << endl << endl << endl;

	cout << endl << "-------------------Test / 2---------------------------------" << endl;
	complexNumber2.printNumber(); //
	cout << endl << "------------------------------------------------------------" << endl << endl << endl << endl;

	cout << endl << "-------------------Test / 3---------------------------------" << endl;
	complexNumber3.printNumber();
	cout << endl << "------------------------------------------------------------" << endl << endl << endl << endl;

	cout << endl << "-------------------Test / 4---------------------------------" << endl;
	complexNumber4.printNumber();
	cout << endl << "------------------------------------------------------------" << endl << endl << endl << endl;

	cout << endl << "-------------------Test / 5---------------------------------" << endl;
	complexNumber5.setValue();
	complexNumber5.printNumber();
	cout << endl << "------------------------------------------------------------" << endl << endl << endl << endl;



	return 0;
}
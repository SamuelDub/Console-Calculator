#include "CalFun.h"
#include <iostream>
#include <string>

void exp() {

	using namespace std;

	long long a;

	long long exponent;

	long long ans;

	cout << "Please type in the base number you would like to exponentiate." << endl;
	cin >> a;

	cout << "Would you like to use an exponent of 2, 3, 4, 5, 6, or 7?" << endl;
	cout << "Just type in the number!" << endl;
	cin >> exponent;

	if (exponent == 2) {

		ans = a * a;

	}
	else if (exponent == 3) {

		ans = a * a * a;

	}
	else if (exponent == 4) {

		ans = a * a * a * a;

	}
	else if (exponent == 5) {

		ans = a * a * a * a * a;

	}
	else if (exponent == 6) {
	
		ans = a * a * a * a * a * a;

	}
	else if(exponent == 7) {
	
		ans = a * a * a * a * a * a * a;

	}
	else if (exponent < 2 || exponent > 5) {

		cout << "Enter a number between 2 and 5" << endl;

	}
	else {

		cout << "Please enter something I can understand." << endl;

	}

	if (exponent >= 2 && exponent <= 7){

		cout << a << " to the power of " << exponent << " is " << ans << "!" << endl;

	}

}
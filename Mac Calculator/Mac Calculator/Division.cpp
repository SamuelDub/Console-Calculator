#include "CalFun.h"
#include <iostream>
#include <string>

void divide() {

	using namespace std;

	double a;

	double b;

	double ans;

	cout << "Enter the first number you would like to divide." << endl;
	cin >> a;

	cout << "Enter the second number you would like to divide." << endl;
	cin >> b;

	ans = a / b;

	if (b != 0) {

	cout << "Your answer is " << ans << "!" << endl;

	}
	else {
	
		cout << "Enter a number besides 0." << endl;
	
	}

}
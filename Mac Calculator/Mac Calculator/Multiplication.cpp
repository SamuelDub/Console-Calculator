#include "CalFun.h"
#include <iostream>
#include <string>

void multiply() {

	using namespace std;

	long long a;

	long long b;

	long long ans;

	cout << "Enter the first number you would like to multiply." << endl;
	cin >> a;

	cout << "Enter the second number you would like to multiply." << endl;
	cin >> b;

	ans = a * b;
	cout << "Your answer is " << ans << "!" << endl;

}
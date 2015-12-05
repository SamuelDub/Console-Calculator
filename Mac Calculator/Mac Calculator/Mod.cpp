#include "CalFun.h"
#include <iostream>
#include <string>

void mod() {

	using namespace std;

	long long a;

	long long b;

	long long ans;

	cout << "Enter the first number you would like to mod." << endl;
	cin >> a;

	cout << "Enter the second number you would like to mod." << endl;
	cin >> b;

	ans = a % b;

	cout << "Your answer is " << ans << "!" << endl;

}
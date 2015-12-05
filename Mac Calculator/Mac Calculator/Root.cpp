#include "CalFun.h"
#include <iostream>
#include <string>
#include <math.h>

void root() {

	using namespace std;

	cout << "This funtion will only give you up to five decimal places and is not 100% accurate" << endl;

	double a;

	double ans;

	cout << "What number would you like to find the square root of?" << endl;
	cin >> a;

	ans = sqrt(a);

	cout << "Your answer is " << ans << "!" << endl;

}
#include "CalFun.h"
#include <iostream>
#include <string>

void square() {

	using namespace std;

	long long a;

	long long ans;

	cout << "Enter the number you would like to square." << endl;
	cin >> a;

	ans = a * a;

	cout << "The square of " << a << " is" << ans << "!" << endl;

}
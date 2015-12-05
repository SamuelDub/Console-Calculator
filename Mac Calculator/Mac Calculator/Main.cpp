//Needed headers
#include <iostream>
#include <string>
#include <locale>
#include <chrono>
#include <thread> 
//My headers
#include "CalFun.h"

int main() {

	using namespace std;

	string t = "";

	string wait;

	while (t != "done") {
		t == "";

		Intro();

		cin >> t;

		if (t == "add" || t == "Add" || t == "ADD") {

			add();

		} else if (t == "subtract" || t == "Subtract" || t == "SUBTRACT") {

			subtract();


		} else if (t == "multiply" || t == "Multiply" || t == "MULTIPLY") {

			multiply();

		}
		else if (t == "divide" || t == "Divide" || t == "DIVIDE") {

			divide();

		} else if (t == "mod" || t == "Mod" || t == "MOD") {

			mod();

		} else if (t == "square" || t == "Square" || t == "SQUARE") {

			square();

		} else if (t == "root" || t == "Root" || t == "ROOT") {

			root();

		} else if (t == "exponent" || t == "Exponent" || t == "EXPONENT") {

			exp();

		} else if (t == "done" || t == "Done" || t == "DONE"){

			return 0;

		}
		else if (t == "celebrate" || t == "Celebrate" || t == "CELEBRATE") {

			int times = 0;

			while (times < 18) {
			
				this_thread::sleep_for(chrono::milliseconds(200));

				cout << "CELEBRATE v10.0!" << endl;

				times++;

			}

		}

	}

	return 0;

}
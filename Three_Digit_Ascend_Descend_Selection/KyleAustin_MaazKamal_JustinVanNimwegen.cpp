
/*
Maaz Kamal, Kyle Austin, Justin Van Nimwegen, Yezen Higazin - 4		Edited By: Matt Price
*/
//Three_Digit_Ascend_Descend_Selection

//Libraries
#include <iostream> 
#include <conio.h>

using namespace std;

//functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}
	void main() {
		int x;

		for (int i = 1; i <= 30; i++) {
			cout << i << endl;
			cout << "Choose a 3 digit number" << endl;// Type a three digit number into the window.
			cin >> x; //Peron typing and hitting enter.
			int A = x / 100;
			int B = x % 100 / 10;
			int C = x % 10;
			cout << "Nice Choice Loser XD" << endl; // Says this after they hit enter.
			if ((A > B) && (B > C)) {
				cout << "Descending" << endl;
			}
			else if ((A < B) && (B < C)) {
				cout << "Ascending" << endl;
			}

			else {
				cout << "Neither" << endl;
			}
		}
	}

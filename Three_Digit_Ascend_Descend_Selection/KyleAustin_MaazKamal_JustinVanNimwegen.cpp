/*
Maaz Kamal, Kyle Austin, Justin Van Nimwegen, Yezen Higazin - 4

Assignment Name : Three_Digit_Ascend_Descend_Selection

Taking in data and tranfering into 'if' statements

*************Downloaded and edited by Spencer Bullinger 10/12/17
Assignment 4: Loops*************************

*/

//Libraries
#include <iostream> 
#include <conio.h>

//namespaces
using namespace std;

//functions
void pause() {
	cout << "Press any key to continue . . ."; /*initial entry point*/
	while (!_kbhit());
	_getch();
	cout << '/n';
}

void main() {
	int x;
	for (int i = 1; i <= 30; i++) { /*30 loops*/
		cout << "Choose a 3 Digit #" << endl; /*user imputs 3 digit number*/
		cin >> x; /*this is the 3 digit number val*/
		cout << "You Chose " << x << endl;

		int A = x / 100; /*finds digit in the hundredths place*/
		int B = x % 100 / 10; /*finds digit in the tenths place*/
		int C = x % 10; /*finds digit in the ones place*/
		if ((A > B) && (B > C)) {          /*computation for descending*/
			cout << x << " Is Decending" << endl;

		}
		else if ((A < B) && (B < C)) { /*computation for ascending*/
			cout << x << " Is Acending" << endl;
		}
		else { /*computation for exceptions*/
			cout << x << " Is Neither" << endl;
		}
	}

	pause(); /*showcase result*/

}

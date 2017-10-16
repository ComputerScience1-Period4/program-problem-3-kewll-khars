/*
-Maaz Kamal, Kyle Austin, Justin Van Nimwegen, Yezen Higazin - 4
	Edited By: Marcus Basta
Assignment: Three Digit Ascend Decend Selection
*/
#include <iostream>
#include <conio.h>

using namespace std;


 void pause() {
	 cout << "press any key to continue. . . ";
	 while (!_kbhit());
	 _getch();
	 cout << '/n';
}

 void main() {
	 int x;

	 for (int i = 1; i <= 30; i++) {
		 cout << i << endl;
		 cout << "Choose a 3 Digit #" << endl;
		 cin >> x;
		 int A = x / 100;
		 int B = x % 100 / 10;
		 int C = x % 10;
		 cout << "Choose wiseley " << x << endl;
		 if ((A > B) && (B > C)) {
			 cout << "decending" << endl;
		 }
		 else if ((A < B) && (B < C)) {
			 cout << "acending" << endl;
		 }
		 else {
			 cout << "neither" << endl;
		 }
	 }
 }

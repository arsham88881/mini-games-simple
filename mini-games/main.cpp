#include <iostream>
#include <string>
#include <windows.h>
#include "wordgauss.cpp"

using namespace std;

int menu() {
	int choose;
	cout << "welcome to your mini games " << endl << endl;
	cout << "choose your game : "<<endl
		<< "[1] : word gauss game " << endl
		<< "[2] : number gauss game " << endl
		<< "[3] : conundrum game " << endl
		<< "[4] : Exit " << endl << endl;

	cout << "your choose : ~> ";
	cin >> choose;
	cout << "be patient..." << endl;
	Sleep(2000);

	return choose;
}

int main() {
	bool flag = 1;
	while (flag) {
		switch (menu()) {
			case 1: { //word-gauss.h
				hangMan();
			}break;
			case 2: { //number-guass.h

			}break;
			case 3: { //conudrum.h

			}break;
			case 4: {//Exit game
				flag = 0;
			}break;
			default: {
				cout << "not valid input try again please " << endl;
				Sleep(2000);
			}break;
		}
		system("cls");
	}
	
    return 0;
}

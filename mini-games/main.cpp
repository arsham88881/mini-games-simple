#include <iostream>
#include <string>
#include <windows.h>
#include "wordgauss.cpp"
#include "numberguass.cpp"
#include "rockPaper.cpp"

using namespace std;

int menu() {
	int choose;
	cout << "welcome to your mini games " << endl << endl;
	cout << "choose your game : "<<endl
		<< "[1] : word gauss game " << endl
		<< "[2] : number gauss game " << endl
		<< "[3] : Rock Paper and scissors game " << endl
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
			case 1: { //wordGauss.cpp
				hangMan();
			}break;
			case 2: { //numberGuass.cpp
				numberGuass();
			}break;
			case 3: { //rockPaper.cpp
				rockPaper();
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

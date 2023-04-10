#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
#include <ctime>
#include <iomanip>

using namespace std;

void numberGuass() {
	time_t srand(time(0));
	int fact = rand() % 100;
	int user_guass;
	int guass = 10;
	cout << "welcome to number guess game !!!" << endl;
	cout << "ready !!!" << endl;
	cout << "in process..." << endl;
	Sleep(2000);
	system("pause");
	system("cls");
	do {
		cout << "guess number between 0 to 100 ~~>  ";
		cin >> user_guass;
		if (user_guass > fact) {
			cout << "your guass greater than fact. "
				<< "\t your chance : " << --guass << endl;
			Sleep(3000);
			system("cls");
		}
		else if (user_guass < fact) {
			cout << "your guass lower than fact. "
				<< "\t your chance : " << --guass << endl;
			Sleep(3000);
			system("cls");
		}
		else {
			cout << "correct guess !! hoooray ." << endl;
			cout << "thank's for your playing press any key for back to main menu" << endl;
			system("pause");
			exit(1);
		}
	} while (guass != 0);
	cout << "your lose fuck you !!!" << endl;
	Sleep(2500);
}
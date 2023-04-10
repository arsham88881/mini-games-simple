#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <ctime>

using namespace std;

enum possible {
	Rock = 1, //1
	paper = 2,  //2
	Scissors = 3  //3
};

void rockPaper() {
	srand(time(0));
	int comp = rand() % 3 + 1;
	int user = 0;
	int c_rand = 0;
	int user_rand = 0;
	int rand = 1;
	cout << "welcome to Rock Paper Scissors game !!!" << endl;
	cout << "ready!!!" << endl;
	system("pause");
	system("cls");
	do {
		if (rand == 4 || user_rand == 2 || c_rand == 2) {
			if (user_rand > c_rand) {
				cout << "your won!!! hooray" << endl;
				Sleep(3000);
			}
			else {
				cout << "your lose!!! " << endl;
				Sleep(3000);
			}
			break;
		}
		cout << "     cmp win : " << c_rand << endl;
		cout << "     you win : " << user_rand << "          rand(" << rand << " / 3)" << endl;
		cout << "[1] : Rock " << endl
			<< "[2] : Paper " << endl
			<< "[3] : Scissors " << endl;
		cout << "enter your action ~~>  ";
		cin >> user;
		if (possible(comp) == user) {
			cout << "equal chooses (again)" << endl;
			Sleep(2500);
		}
		else if (user == 1) {
			if (possible(comp) == 2) {
				cout << "you lose this rand !!!paper cover rock. " << endl;
				c_rand++;
				rand++;
				Sleep(2500);
			}
			else {
				cout << "you win this rand !!!rock smashes scissors. " << endl;
				user_rand++;
				rand++;
				Sleep(2500);
			}
		}
		else if (user == 2) {
			if (possible(comp) == 1) {
				cout << "your win this rand !!!paper cover rock. " << endl;
				user_rand++;
				rand++;
				Sleep(2500);
			}
			else {
				cout << "your lose this rand !!!scissors cut paper. " << endl;
				c_rand++;
				rand++;
				Sleep(2500);
			}
		}
		else if (user == 3) {
			if (possible(comp) == 1) {
				cout << "you lose this rand !!!rock smashes scissors. " << endl;
				c_rand++;
				rand++;
				Sleep(2500);
			}
			else {
				cout << "you win !!!scissors cut paper. " << endl;
				user_rand++;
				rand++;
				Sleep(2500);
			}
		}
		else {
			cout << "invalid input!!!! try again" << endl;
			Sleep(2500);
		}
		system("cls");
	} while (true);
}
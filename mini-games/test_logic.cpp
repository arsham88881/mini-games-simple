#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
#include <ctime>
/*
using namespace std;
char* random_w() {
    const int list_size = 8;
	srand(time(0));
	int Index = rand() % 8;
	static char arr[list_size][50] = {"banana","apple","strawberrie","grape",
							 "orange","watermelon","blueberrie","lemon" };
	return arr[Index];
}
bool finish_id(char* word, int founded_in[]) {
	for (int i = 0; i < strlen(word); i++) {
		if (founded_in[i] == 0) {
			return false;
		}
	}
	return true;
}
void show_status(char* word,int founded_in[]) {
	for (int i = 0; i < strlen(word) ; i++) {
		if (founded_in[i] == 1) {
			cout <<word[i];
		}
		else {
			cout << " _ ";
		}
	}
	cout << endl;
}
bool hang_prosses(char* word, int guass) {
	const int list_size = strlen(word);
	int* founded_in;
	founded_in = new int[list_size] {0};
	char guass_char;
	for (int i = 0; i < guass; i++) {
		int true_guass = 0;
		if (finish_id(word, founded_in)) {
			return true;
			break;
		}
		show_status(word, founded_in);
		cout << endl << "chance 3 more word's character : " << (i + 1)
			<< endl << "take a guass: \t";
		cin >> guass_char;
		for (int j = 0; j < strlen(word); j++) {
			if (word[j] == guass_char || word[j] == guass_char - 32) {
				founded_in[j] = 1;
				true_guass++;
			}
		}
		if (true_guass != 0) {
			cout << "this natch exist find it !!!" << endl;
		}
		else {
			cout << "not found this match !!!" << endl;
		}
		Sleep(1000);
	}
	return false;
}
void hangMan() {
	cout << "welcome to hang man game !!!" << endl;
	cout << "please!!! make sure your caps_lock off" << endl;
	cout << "ready!!!" << endl;
	cout << "fraud ==> (word are a fruit) " << endl;
	system("pause");
	char* c_word = random_w();
	int guass = strlen(c_word) + 3;
	if (hang_prosses(c_word, guass)) {
		cout << "your won !!! hoooray" << endl;
	}
	else {
		cout << "your lose !!!" << endl;
	}
	cout << "word is : " << c_word << endl;
	cout << "thank's for playing " << endl;
	cout << "press any key for back to main menu ";
	system("pause");
}
int main() {
	hangMan();
	return 0;
}
*/
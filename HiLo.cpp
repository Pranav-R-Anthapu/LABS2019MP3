#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int systemNumber, guess;
	int tries = 0;
	string playGame = "y";
	while (playGame == "y") {
		systemNumber = rand() % 999 + 1;
		cout << "Please enter a number." << endl;
		cin >> guess;
		tries++;
		while (guess != systemNumber) {
			if (systemNumber > guess) {
				cout << "LOW" << endl;
			}
			else if (systemNumber < guess) {
				cout << "HIGH"<< endl;
			}
			cout << "Enter your next guess." << endl;
			cin >> guess;
			tries++;
		}
		cout << "WON" << endl;
		cout << "Number of tries: " << tries << endl;
		cout << "Do you want to play again?(y/n)" << endl;
		cin >> playGame;
	}
}

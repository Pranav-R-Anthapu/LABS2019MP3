#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int dealerSum, playerSum;
	string playGame = "y";
	string drawCard;
	srand(time(0));
	while (playGame == "y")
	{
		random_device rd;
		mt19937 gen(rd()); 
		uniform_int_distribution<> dist(1, 10);
		dealerSum = rand() % 10 + 1 + rand() % 10 + 1;
		playerSum = rand() % 10 + 1 + rand() % 10 + 1;
		cout << "Player Sum " << playerSum << endl;
		while (dealerSum < 21 || playerSum < 21) {
			if (dealerSum < 16)
			{
				dealerSum += (rand() % 10 + 1);
				if (dealerSum > 21) {
					cout << dealerSum << endl;
					break;
				}
			}
			cout << "Do you want to draw another card?(y/n)" << endl;
			cin >> drawCard;
			if (drawCard == "y") {
				playerSum += (rand() % 10 + 1);
				cout << playerSum << endl;
				if (playerSum > 21) {
					cout << dealerSum << endl;
					break;
				}
			}
			else if (drawCard == "n") {
				cout << dealerSum << endl;
				break;
			}
		}
		if (dealerSum <= 21 && dealerSum >= playerSum || playerSum > 21)
			cout << "The winner is the dealer!" << endl;
		else if (playerSum <= 21 && playerSum >= dealerSum || dealerSum > 21)
			cout << "You won!" << endl;

		cout << "Do you want to play again?(y/n)" << endl;
		cin >> playGame;
	}
	cout << "Thank you for playing Pranav Anthapu's Blackjack game! See you later!" << endl;
	cout << "\n";
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Constants
string ANSWER = "seventeen";
vector<string> HANGMEN = {
	      "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========", 

        "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",

        "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",

        "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========", 

        "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",

        "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",

        "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n========="};


void guessResult(char guess, string& result) {
	for(int i = 0; i < ANSWER.length(); i++) {
		if (ANSWER[i] == guess){
			result[i] = guess;
		} 
	}
	cout << result << endl;

}
int main() {
	string player;
	char guess;
    string guesses; 
    int wrong = 0;
	string inprog(ANSWER.length(), '_');

	cout << "Welcome to Hangman!!" << endl;
	cout << HANGMEN[wrong] << endl;
	cout << "\n~~~~~~~~~\n";
	cout << "Enter PLAYER name: ";
	cin >> player;
	cout << "Hello, " << player << "!\nThe word is " << ANSWER.length() << " letters long.\nEnter your first guess: ";
	while(wrong < 6) {
		cin >> guess;
		cout << "Your guess: " << guess << endl; 
        cout << HANGMEN[wrong] << endl;
        if (guesses.find(guess) != string::npos) {
            cout << "You already guessed this letter." << endl;
            continue; 
        }
        guesses += guess; 
        string temp = inprog; 
		guessResult(guess, inprog);		
        if (inprog == temp) {
            cout << "The letter " << guess << " isn't in the word.\n"; 
            wrong++; 
        }
        cout << HANGMEN[wrong] << endl;
		if(inprog==ANSWER) {
			cout << "You win!\nThanks for playing!\n";
			break;
		}
	}
    if (wrong == 6) {
        cout << "You're out of guesses!\nThe word was " << ANSWER << ".\n"; 
    }

    return 0; 

}
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Welcome to the Number Guessing Game!" << endl;
  cout << "Guess a number between 1 and 100." << endl;
	cout << "Good Luck!" <<endl;
	
	int num, guess, tries = 0;
	srand(time(0)); //to generate random number
	num = rand() % 100 + 1; // random number lies between 1 and 100

	do
	{
		cout << "Enter your guess:";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Oops! The number you have guessed is too high than the secret number." << endl;
		else if (guess < num)
			cout << "Oops! The number you have guessed is too low than the secret number." << endl;
		else
			cout << "Well done! The number is " << num << ". You guessed it right in " << tries << " guesses." << endl;
	} while (guess != num);

	return 0;
}

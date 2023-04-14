// FictionUpgraded.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Morgan Soetaert

#include "Header.h"

using namespace std;

void start() {
	const int Dishes = 20;
	int guests, killed, survivors;
	string Chef;

	int secretMenu = 500;
	int realMenu = 20;

	int terroristAccount = 56745;

	//get the information 
	//cout << "Welcome to Hawthorne\n\n ";
	cout << "Please enter the following for your personalized menu.\n";

	cout << "Enter the number of people in your party: ";
	cin >> guests;

	cout << "Enter the number of people in your party minus one: ";
	cin >> killed;

	survivors = guests - killed;

	cout << "Enter your last name: ";
	cin >> Chef;

	//tell the story
	cout << "\nA hungry group of " << guests
		<< " dinner guests hopped on a boat ";
	cout << "\n-- to go the famous Hawthorne resturant. ";
	cout << " Hawthorne is run by the famous Chef " << Chef << ".\n";
	cout << " During their dinner some strange dishes started being served. ";
	cout << "All created by the famous Chef " << Chef;
	cout << "\nAfter the dish The Mess, \neveryone realized that this was no ordinary dinner. ";
	cout << "\nAfter a series of gruesome dishes, " << killed << " were killed,\n ";
	cout << "this left just " << survivors << " person in the group.\n";

	cout << " \nThe last person ran back to the boat, where they looked over the menu seeing " << realMenu << " dishes in all. ";
	cout << "They flipped the menu to the back and saw a secret menu with " << secretMenu << " dishes in all.";
	cout << " They were shocked, if this secret menu has that many dishes, how many people were going to that dinner?";
	cout << "\nThey cannot believe what just happened and how their night just ended.\n";
}

int dishes(int a, int b)
{
	int r;
	r = a + b;
	return r;
}

int poster()
{
	system("movieposter_en.jpg");
	return 0;
}

int main()
{
	char again = 'y';
	while (again == 'y')
	{
		poster();
		int z;
		z = dishes(11, 9);
		cout << "Welcome to Hawthorne! There are " << z << " dishes on the menu tonight""\n\n";

		start();

		string people[10] = { "Margot, Chef Slowik, Tyler, Elsa, Lillian, Felicity, Anne, Ted, Bryce, Soren" };

		string dishes[10] = { "Lemon Caviar, Amushe Bouche, The Island, Breadless Bread Plate, Chicken Tacos, The Mess, Palate Cleanser, Man's Folly, Passard Egg, Burrito" };

		string dishesTwo[10] = { "Tyler's Dish, Birthday Cake, Cheeseburger, S'Mores, Garlic Pasta, Sweetbreads, Lobster, Roast Beef, Turkey Burger, Souffle" };

		int numPro = 0;
		people[numPro++] = "Margot";
		people[numPro++] = "Chef Slowik";
		people[numPro++] = "Tyler";
		people[numPro++] = "Elsa";
		people[numPro++] = "Lillian";
		people[numPro++] = "Felicity";
		people[numPro++] = "Anne";
		people[numPro++] = "Ted";
		people[numPro++] = "Bryce";
		people[numPro++] = "Soren";

		int numClass = 0;
		dishes[numClass++] = "Lemon Caviar";
		dishes[numClass++] = "Amushe Bouche";
		dishes[numClass++] = "The Island";
		dishes[numClass++] = "Breadless Bread Plate";
		dishes[numClass++] = "Chicken Tacos";
		dishes[numClass++] = "The Mess";
		dishes[numClass++] = "Palate Cleanser";
		dishes[numClass++] = "Man's Folly";
		dishes[numClass++] = "Passard Egg";
		dishes[numClass++] = "Burrito";

		int numClassTwo = 0;
		dishesTwo[numClassTwo++] = "Tyler's Dish";
		dishesTwo[numClassTwo++] = "Birthday Cake";
		dishesTwo[numClassTwo++] = "Cheeseburger";
		dishesTwo[numClassTwo++] = "S'Mores";
		dishesTwo[numClassTwo++] = "Garlic Pasta";
		dishesTwo[numClassTwo++] = "Sweetbreads";
		dishesTwo[numClassTwo++] = "Lobster";
		dishesTwo[numClassTwo++] = "Roast Beef";
		dishesTwo[numClassTwo++] = "Turkey Burger";
		dishesTwo[numClassTwo++] = "Souffle";

		
		cout << "Here is a list of some of the dishes from tonight. \n\n";
		cout << dishes[0];
		cout << "\n\n";
		cout << dishes[1];
		cout << "\n\n";
		cout << dishes[2];
		cout << "\n\n";
		cout << dishes[3];
		cout << "\n\n";
		cout << dishes[4];
		cout << "\n\n";
		cout << dishes[5];
		cout << "\n\n";
		cout << dishes[6];
		cout << "\n\n";
		cout << dishes[7];
		cout << "\n\n";
		cout << dishes[8];
		cout << "\n\n";
		cout << dishes[9];
		cout << "\n\n";

		cout << "Here is a second list of some of the dishes here tonight.\n\n";
		cout << dishesTwo[0];
		cout << "\n\n";
		cout << dishesTwo[1];
		cout << "\n\n";
		cout << dishesTwo[2];
		cout << "\n\n";
		cout << dishesTwo[3];
		cout << "\n\n";
		cout << dishesTwo[4];
		cout << "\n\n";
		cout << dishesTwo[5];
		cout << "\n\n";
		cout << dishesTwo[6];
		cout << "\n\n";
		cout << dishesTwo[7];
		cout << "\n\n";
		cout << dishesTwo[8];
		cout << "\n\n";
		cout << dishesTwo[9];



		srand(static_cast<unsigned int> (time(0)));
		// seed random number generator

		int secretNumber = rand() % 10;
		int secretNumberTwo = rand() % 10;
		// random number between 1 and 100
		int guessTwo;
		int tries = 0;
		int guess;

		do
		{
			cout << "\n\nGuess which dish " << people[secretNumber] << "'s favorite is from tonight's menu guessing numbers between 1 and 10: ";
			// grabbing a guest from the people array according to what the random secret number is 
			cin >> guess;
			++tries;

			if (guess > secretNumber)
			{
				cout << "\n\n";
				cout << "Not this dish\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "\n\n";
				cout << "Not this dish\n";
			}
			else
			{
				cout << "\n\n";
				cout << "Correct!\n\n";
				cout << dishes[secretNumber];
				// grabbing a dish from the array according to whatever the secret number is
				cout << "\n\n";
				cout << "is " << people[secretNumber] << "'s favorite dish tonight!\n\n";
				// grabbing a guest from the people array according to whatever the secret number is
				cout << '\a';
				//Plays a sound indicating it's time to guess another dish
				cout << "Now it's time to guess what dish " << people[secretNumber] << " really enjoyed tonight using numbers between 1 and 10";
				// grabbing a guest from the people array according to whatever the secret number is
			}
		} while (guess != secretNumber);
		// guess number is equal to secret random number do next loop
		do {

			cin >> guessTwo;
			// using the second guess integaer
			++tries;
			// unlimated tries

			if (guessTwo > secretNumberTwo) {
				cout << "\n\n";
				cout << "not this dish";
			}
			else if (guessTwo < secretNumberTwo)
			{
				cout << "\n\n";
				cout << "not this dish";
			}
			else
				// guess number is equal to secret random number
			{
				cout << "\n\n";
				cout << "Correct!\n\n";
				cout << dishesTwo[secretNumberTwo];
				cout << "You did it! " << people[secretNumberTwo] << "'s favorite dish from tonight was " << dishesTwo[secretNumberTwo];
			}
		} while (guessTwo != secretNumberTwo);
		// guess number is equal to secret random number
		cout << "\nDo you want to play again? (y/n): ";
		// say y to repeat loop
		cin >> again;
	}
	cout << "\nOkay, bye!";
	// say n to end loop
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

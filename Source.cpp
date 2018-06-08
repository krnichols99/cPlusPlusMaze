/*
	06-0316-0031
	
	purpose: create a game where the user plays as '@' and travels throught the mazes to try to get to the next level
		health is slowly gained and lost throughout the process
*/

/*
	setting up the program: 
		1. create a class named 'Level' that creates the board [taking the info from a doc and putting it into an array or vector and then places character at the starting point]
			creates and stores all necissary variables [health, score, character location ... so on],
			and renders
				-each of these functionalities should have dedicated functions within the level class
				-the leveel must be stored as a char pointer
		2. create a level object instance, will be used to load the next level when the level is changed
		3. player heatlthe must be tracted as an integer initialized with 5 points
			- game ends when reaching 0
		5. player score is tracked as an integer initialized as 0
		6. health and score must be displayed 
		7. # is wall, . is floor, $
*/

#include<iostream>
#include<string> // required when working with strings
#include<fstream> //required for working with input and output files
using namespace std;

class Level { // handles the level loading, storage, and rendering
	
	// loading the level
	int levelNum = 1;

};


int main() {
	//initializing game values
		int playerScore = 0;
		int health = 5;
		int cordX = 0, cordY = 0;
		int roundNum = 1;
		string movement;


		while (health > 0) {
			//display level board
			fstream file;
			string line;
			int x, y;
			int i = 1;
			while (file >> line) {
				if (i == 1) {
					// gets the coords from the doc for the game
				}
				else {
					cout << line << endl;
				}
			}
			file.close();
		

			//displays user values
			cout << "\n\nYour score is: " << playerScore
				<< "\nYour health is: " << health
				<< "\nEnter WASD to move : ";
			cin >> movement;
			cout << "\n\n\n\n\n\n";

			for (int i = 0; i < movement.length(); i++) {
				// calculates for player movement based off of what the user enters
				if (movement[i] == 'w' || movement[i] == 'W') {
					cordY -= 1;
				}
				if (movement[i] == 'a' || movement[i] == 'A') {
					cordX -= 1;
				}
				if (movement[i] == 's' || movement[i] == 'S') {
					cordY += 1;
				}
				if (movement[i] == 'd' || movement[i] == 'D') {
					cordX += 1;
				}
				// calculates new score and health
				//if (board(cordX, cordY) == $) {
				//	health += 10;
				//}
			}

			//incriments round number
			roundNum++;
		} // at the end of this loop if the health is still > 0, the game board refreshes and the new values are displayed.
}
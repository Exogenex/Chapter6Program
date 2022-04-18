//Micah Pennington
//January 25 2022 ©
//Chapter 6 Program

#include <iostream>
using namespace std;

//Function prototypes
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);


int main() {
	//ints to hold the scores
	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	int score4 = 0;
	int score5 = 0;

	//Get the scores
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	//Calculate and display the average
	calcAverage(score1, score2, score3, score4, score5);

	return EXIT_SUCCESS;
}


/// <summary>
/// Gets a test score and stores it in the supplied variable(ref)
/// </summary>
/// <param name="score">| The variable to store the score entered (Reference)</param>
void getScore(int& score) {
	//Bool to make sure the input score is in the correct range
	bool t = true;

	//Validate input
	do {
		//Test to see if the loop is running a second time, if it is an error occured
		if (t = false) cout << "Error: Bad input\n";

		//Ask the user for a score
		cout << "Please enter a test score: ";
		//Get the score and assign it to the score variable
		cin >> score;

		//Make sure the input score is in the correct range
		if (0 <= score && score <= 100) t = true;
		else t = false;
	} while (!t);
}


/// <summary>
/// Takes 5 test scores and displays the average between them
/// </summary>
/// <param name="score1">| The score of test 1</param>
/// <param name="score2">| The score of test 2</param>
/// <param name="score3">| The score of test 3</param>
/// <param name="score4">| The score of test 4</param>
/// <param name="score5">| The score of test 5</param>
void calcAverage(int score1, int score2, int score3, int score4, int score5) {
	//int to hold average minus the lowest score [(sum of scores - lowest score) / 4]
	int averageMinusLowest = ( ( score1 + score2 + score3 + score4 + score5 ) - findLowest(score1, score2, score3, score4, score5) ) / 4;

	//Display the average score
	cout << "Average score with the lowest score dropped is: " << averageMinusLowest;
}

/// <summary>
/// Finds and returns the lowest score out of the 5 test scores passed to it
/// </summary>
/// <param name="score1">| The score of test 1</param>
/// <param name="score2">| The score of test 2</param>
/// <param name="score3">| The score of test 3</param>
/// <param name="score4">| The score of test 4</param>
/// <param name="score5">| The score of test 5</param>
/// <returns>Lowest score out of the 5 test scores</returns>
int findLowest(int score1, int score2, int score3, int score4, int score5) {
	//int to hold the lowest score
	int low = 101;

	//Test all the scores
	if (low > score1) low = score1;
	if (low > score2) low = score2;
	if (low > score3) low = score3;
	if (low > score4) low = score4;
	if (low > score5) low = score5;

	//return the lowest value
	return low;
}
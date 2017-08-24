// Chapter 5, Programming Challenge #24
// C5P24.cpp
// Matt Ingold
// 03/06/2017


// A program that reads numeric data from a file and outputs details about the data.


#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream inputFile("random.txt");
	double number;
	double numberOfNumbers = 0;
	double runningTotal = 0;
	double averageOfNumbers;

	if (inputFile.fail()) {  // This will prevent errors from happening if the file or path doesn't exist
		cout << "There was an error opening the file.\n";
	}
	else {  // This block runs when the file opens successfully
		while (inputFile >> number) {  // Loops until the end of the file. Counts number of numbers and gets the sum of all numbers  
			numberOfNumbers++;
			runningTotal += number;
		}
		averageOfNumbers = runningTotal / numberOfNumbers;  // Get the average number from our file
		inputFile.close();
	}


	cout << "There are " << numberOfNumbers << " numbers in your file\n"
		<< "The total sum of the numbers is " << runningTotal << endl
		<< "The average is " << averageOfNumbers << endl;


	return 0;
}

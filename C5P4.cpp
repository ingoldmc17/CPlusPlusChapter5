// Chapter 5, Programming Challenge # 4
// C5P4.cpp
// Matt Ingold
// 03/06/2017


// A program designed to calculate how many calories are burned
// when running on a treadmill. The treadmill for this program
// burns exactly 3.6 calories per minute.

#include <iostream>
using namespace std;

int main() {

	double dblCaloriesPerMinute = 3.6;
	int intInterval = 5;
	int intMaxLength = 30;
	int intMinutes = 5;
	

	for (intMinutes; intMinutes <= intMaxLength; intMinutes += intInterval) {
		cout << "After " << intMinutes << " minutes, you've burned " << dblCaloriesPerMinute * intMinutes
			<< " calories!\n";
	}


	return 0;
}
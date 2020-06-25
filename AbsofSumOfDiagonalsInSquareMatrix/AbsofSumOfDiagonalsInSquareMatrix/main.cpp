#include <vector>
#include "diagonalDifference.h"
#include <iostream>
/*
Given a square matrix, the algorithm can identify the sum of the diagonals
then calculate the absolute difference of this equation. 
*/

int main() {
  
	diagonalDifference diagClass;
	std::vector<int> arrayLineOne = { 11, 2, 4 };
	std::vector<int> arrayLineTwo = { 4, 5, 6 };
	std::vector<int> arrayLineThree = { 10, 8, -12 };

	std::vector<std::vector<int>> array = { arrayLineOne, arrayLineTwo, arrayLineThree };

	int results = diagClass.diagonalDiff(array);

	std::cout << results <<"\n";

	return 0;
}
/*
 * main.cpp
 *
 *  Created on: Aug 23, 2021
 *      Author: frees_000
 */

// Names    : Dayana Pulido, Robert Petersen
// Lab 1    : Vectors
// Course   : Data Structures 1D
// Professor: Liebowitz

// pre-processing

#include <cstdlib>  // more expansive variation of stdlib.h one may be more efficient // test
#include <iostream> // <, >
#include <stdlib.h> // for srand and rand
#include <time.h>   // makes srand dynamic to create truly random values
#include <vector>   // for the data structure vector
#include <sstream>  // used to convert vector to string
#include <algorithm> // used for sstream
#include <bits/stdc++.h> // for sort
#include <iterator> // for vector to string
using namespace std;

int main(){

						// declarations
	int rearrangeThis;
	int randomValue;   							// this to save the value for random integers to put to a vector
	vector<int> randomNumbers;  				// vector for the integers
	vector<string> randomNumbersStringReversed; // vector for the reversed string values
	vector<string> sortedVectorForAdding;		// vector for the addition of the sorted non reversed values
srand (time(NULL)); // to create random moment of time to create dynamic

/*
https://www.cplusplus.com/reference/cstdlib/rand/
rand() % 100 + 1;     // v2 in the range 1 to 100
*/

for(int i=0; i<20; i++)
{
	randomValue = rand() %  101 + 200;
	randomNumbers.push_back(randomValue);
}

// this pushes all values of randomValue to randomNumbers for reorganization

	cout << "Creating vectors..." << endl;
	cout << "Printing vectors...";
	cout << endl;
for(int i=0; i<20; i++)
{
	cout << randomNumbers.at(i);
	cout << " ";
}

// this successfully sorts from least to greatest values of the vector
	cout << endl << endl << endl;
	cout << "Sorting Vectors :";
	cout << endl;
	sort(randomNumbers.begin(), randomNumbers.end());
for(int i=0; i<20; i++)
{
	cout << randomNumbers.at(i);
	cout << " ";


}

// we must copy the value of the vector randomNumbers
// so that we can run addition and translate also into a string
//

// reference material
// https://newbedev.com/how-to-store-a-value-obtained-from-a-vector-pop-back-in-c
// reference material for converting a int vector to a string vector
// https://www.geeksforgeeks.org/transform-vector-string/

	cout << endl << endl << endl;
	cout << "Reversing Digits of a Vector : " << endl;
	ostringstream ostr;   // output string stream
	for(int i=0; i<20; i++)
	{
		// This converts the vector into a string
		// to then reverse the string to for printing representation
		// then reverses the string vector so it matches the order
		// of the original vector for interpretive translation.
		//https://stackoverflow.com/questions/5290089/how-to-convert-a-number-to-string-and-vice-versa-in-c
		//https://www.educative.io/edpresso/how-to-convert-an-int-to-a-string-in-cpp

		rearrangeThis = randomNumbers.back();
		string rearrange;
		stringstream ss;
		ss << rearrangeThis;
		ss >> rearrange;
		sortedVectorForAdding.push_back(rearrange);
		reverse(rearrange.begin(), rearrange.end());
		randomNumbersStringReversed.push_back(rearrange);
		randomNumbers.pop_back(); // we pop to reduce memory allocation of previous vector
	}

	// this allows us to add as the prompt requests
		reverse(sortedVectorForAdding.begin(), sortedVectorForAdding.end());
		reverse(randomNumbersStringReversed.begin(), randomNumbersStringReversed.end());

	for(int i=0; i<20; i++)
	{
		cout << randomNumbersStringReversed.at(i) << " ";
	}

	cout << endl;


// this is checking so we can see the vectors are sorted correctly.
//	for(int i=0; i<20; i++)
//	cout << sortedVectorForAdding.at(i) << " ";

	cout << endl;

	for(int i=0; i>20; i++)
	cout << sortedVectorForAdding.at(i) << " ";
//  reference material
//	https://www.codegrepper.com/code-examples/cpp/convert+string+to+char+c%2B%2B
	/*while(!randomNumbersStringReversed.empty())
	{
		cout << "Summing digits of non reversed vector";
		addThis = randomNumbersStringReversed.back();

	}
*/

	// reference
	// https://en.cppreference.com/w/cpp/algorithm/accumulate
	// https://www.tutorialspoint.com/convert-string-to-char-array-in-cplusplus

	cout << "Summing digits of non reversed vector...";
	cout << endl;
	for(int i=0; i<20; i++)
	{
	cout << "The digits: " << sortedVectorForAdding.at(i) << " summed together are: ";
	string str = sortedVectorForAdding.at(i);
	char c[str.size()+1];
	str.copy(c, str.size()+1);
	c[str.size()] = '\0';
	cout << c[0] + c[1] + c[2] - 144;

	// 144 for 48 * 3 to resolve for the ascii representation

	// we are at vector location
	// divide each element string into its characters
	// + 1 for the null so 4 total spaces
	// char.at(0)
	cout << endl;
	}


	// reference material
	// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c



	// for final solution
	// ascii numbers start at 48
	// so convert the string to its ascii representation then
	// subtract 48 from each value, then add the remaining values
	// this would create the accurate representation of the string
	// post translation.


// https://www.cplusplus.com/reference/vector/vector/pop_back/
return 0;
}




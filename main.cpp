/*
 * main.cpp
 *
 *  Created on: Aug 23, 2021
 *      Author: frees_000
 */

// Names: Dayana Pulido, Robert Petersen
// Lab 1: Vectors
// Course: Data Structures 1D
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
	int integerToString;
	int randomValue;   // this to save the value for random integers to put to a vector
	vector<int> randomNumbers;  // vector for the integers

srand (time(NULL)); // to create random moment of time to create dynamic

/*
rand() % 100 + 1;     // v2 in the range 1 to 100
*/

for(int i=0; i<20; i++)
{
	randomValue = rand() %  101 + 200;
	randomNumbers.push_back(randomValue);
}

// this pushes all values of randomValue to randomNumbers for reorganization

	cout << "The Vector Elements are :";
	cout << endl;
for(int i=0; i<20; i++)
{
	cout << randomNumbers.at(i);
	cout << endl;
}

// this successfully sorts from least to greatest values of the vector

	cout << "Sorting Vectors :";
	cout << endl;
	sort(randomNumbers.begin(), randomNumbers.end());
for(int i=0; i<20; i++)
{
	cout << randomNumbers.at(i);
	cout << endl;

}

// step 4

//https://newbedev.com/how-to-store-a-value-obtained-from-a-vector-pop-back-in-c

//while(!randomNumbers.empty())  // while not empty
//{

// reference material for converting a int vector to a string vector
// https://www.geeksforgeeks.org/transform-vector-string/

	cout << "Reversing Digits of a Vector : ";
	ostringstream ostr;   // output string stream
	if(!randomNumbers.empty())
	{
		string integerToString = randomNumbers.back();

		cout << typeid(integerToString).name();

		randomNumbers.pop_back();


	}


//}
//swap for step 5 storing the reversed digits in another vector





// step 6

	cout << endl;
	cout << accumulate(randomNumbers.begin(),randomNumbers.end(),0);


// https://www.cplusplus.com/reference/vector/vector/pop_back/
return 0;
}




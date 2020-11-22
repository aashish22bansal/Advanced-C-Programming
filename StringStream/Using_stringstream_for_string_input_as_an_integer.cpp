/*
	Using String Input as an Integer.
 */
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string number="44";
	
	// Creating the stringstream object
	stringstream string_stream_object;
	
	// Storing the value in the string variable inside the stringstream object
	string_stream_object<<number;
	
	int input;
	
	// Using the string as an integer
	string_stream_object>>input;
	
	// Printing the value obtained
	cout<<input<<endl;
	
	return 0;
}

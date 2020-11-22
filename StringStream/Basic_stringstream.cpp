#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	// Taking basic input
	cout<<"Enter an Integer value: "<<endl;
	int input;
	cin>>input;
	
	// Creating a String Stream Object
	stringstream string_stream_object;
	
	// Using the String Insertion Operator
	string_stream_object<<input; // The object contains 'input'
	
	// For reading the stringstream variable, we will be using the string extraction operator
	string strinput;
	string_stream_object>>strinput;
	
	// Printing the values stored
	cout<<endl<<"The Integer Number is: "<<input;
	cout<<endl<<"The Integer Number in the form of String is: "<<strinput;
	
	return 0;
}

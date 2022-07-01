// stringReplacement.cpp - replaces a string with another string in a sentence
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>

using namespace std ;

int main()
{
	
	//Variables
	string originalString = "" ;
	const string HATE = "hate" ;
	const string LIKE = "really like" ;
  

	//Prompts user for sentence containing the word hate and storing it to 		 
    //originalString
	cout << "Please type a sentence that includes the word \"hate\"" << endl ;
	getline(cin, originalString) ;

	//gets length of hate variable 
	int length = HATE.length(); 

  //finds the position where the word hate is found
  int hateLocation = originalString.find(HATE);

  //replace the word hate with the phrase "really like"
	originalString.replace(hateLocation, length, LIKE) ;
  
	cout << "The word \"hate\" starts at position " << hateLocation << " in that sentence." << endl
       << "No room for hate in this world. I fixed your sentence for you." << endl
       << "It has been changed to:   " << originalString ; 

	return 0 ;
}
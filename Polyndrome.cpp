#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string input_word;
	int mismatch = 0;
	char array_word[input_word.length()];

	std:: cout << "Hello! Enter a word to check the palindromaty." << endl;
	std:: cin >> input_word;
	
	strcpy(array_word, input_word.c_str());
	int divider = input_word.length()/2; 

	
	for (int i; i < strlen(array_word); i++){
		array_word[i] = tolower(array_word[i]); // converts all capital letters into lower letters
	}


	
	for (int p =0; p < divider; p++ ){
		if (array_word[p] != array_word[strlen(array_word) - 1 - p]){
			mismatch++;
		}
	}

	if (mismatch != 0){
			std:: cout << "it is not a palindrome" << endl;
			std:: cout << "Your word: "<< input_word << endl;
		}
		else {
			for(int i = 0; i < sizeof(array_word); i++){
				char array_chars[sizeof(array_word)];
				int number;
				number = array_word[i];
				if (number == array_word[i+1] - 1 ){

				}
			}
			std:: cout << "It is a palindrome" << endl;
			std:: cout << "Your word: "<< input_word << endl;
		}
	return 0;
}
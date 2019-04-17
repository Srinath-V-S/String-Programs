/*
Given a string check if it is Pangram or not. 
A pangram is a sentence containing every letter in the English Alphabet.

Input : "The quick brown fox jumps over the lazy dog"
Output : "Given String is a pangram"

Input : "The quick brown fox jumps over the dog"
Output : "Given String is not a pangram"


*/


#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>


bool isPangram(string &str){
	
	// create an array that marks if given character is present or not
	
	bool characters[26] = {false};
	int index;
	for(int i=0;i<str.length();i++){
		// traverse all characters
		// if it is uppercase subtract the index from 'A'
		
		if('A'<= str[i] && str[i] <='Z')
			index = str[i]- 'A';		
			
		// if it is lowercase subtract the index from 'a'
		
		if('a'<= str[i] && str[i] <= 'z')
			index = str[i] - 'a';

		// mark the index true in character arary
		characters[index] = true;
	} 
	
	for(int j=0;j<=25;j++){
		if(characters[j] == false){
			return (false);
		}
	}
	

	return (true);
}


int main(){
	
	string str;
	
	str = "ABCD";
	
	if(isPangram(str))
		cout << " Given String is a pangram";
	else
		cout << " Given String is not a pangram";
	
	return 0;
}

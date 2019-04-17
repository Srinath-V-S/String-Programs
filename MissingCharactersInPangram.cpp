/*
Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the 
English Alphabet Given a string, find all characters that are missing from the string, 
i.e., the characters that can make string a Pangram. We need to print output in alphabetic order.

Input : welcome to geeksforgeeks
Output : abdhijnpquvxyz

Input : The quick brown fox jumps
Output : adglvyz

Uppercase and lowercase characters are considered as same
*/


#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>


bool missingCharactersInPangram(string &str){
	
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
	
	
	// print the missing characters in the pangram
	for(int j=0;j<=25;j++){
		if(characters[j] == false){
			cout << char(j + 'a') << endl;
		}
	}
}


int main(){
	
	string str;
	
	str = "ABCD";
	
	missingCharactersInPangram(str);
	return 0;
}

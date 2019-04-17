/*
Pangrammatic Lipogram:
A pangrammatic lipogram is a text that uses every letter of the alphabet except one. 
For example, “The quick brown fox jumped over the lazy dog” omits the letter S, which the usual pangram includes by using the word jumps.

Given a string, our task is to check whether this string is a pangrammatic lipogram or not.
*/


#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>


bool pangramaticLipogram(string &str){
	
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
	int count;
	
	// print the missing characters in the pangram
	for(int j=0;j<=25;j++){
		if(characters[j] == false){
			count++;
		}
	}
	
	
	// if only one character from english alphabets is missing in a sentence then it is called pangramatic lipogram"
	
	if(count == 1){
		cout << " Given string is pangramatic lipogram";
	}
	else{
		cout << " Given string is not a pangramatic lipogram";
	}
}


int main(){
	
	string str;
	
	str = "The quick brown fox jumped over the lazy ";
	
	pangramaticLipogram(str);
	return 0;
}

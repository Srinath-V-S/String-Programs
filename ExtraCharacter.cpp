/*

Given two strings which are of lengths n and n+1.
The second string contains all the character of the first string, but there is one extra character.
Your task to find the extra character in the second string.

Input : string strA = "abcd";
        string strB = "cbdae";
Output : e
string B contain all the element 
there is a one extra character which is e

Input : string strA = "kxml";
        string strB = "klxml";
Output : l
string B contain all the element 
there is a one extra character which is l

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

	string s1 = "entry";
	string s2 = "enry";
	
	int counter = 0;
	for(int i=0;i<s1.length();i++){
		for(int j=0;j<s2.length();j++){
			if(s1[i] == s2[j]){
				counter++;
			}
		}
		
		if(counter == 0){
			cout << s1[i];
		}
		
		counter = 0;
	}

	return 0;
}

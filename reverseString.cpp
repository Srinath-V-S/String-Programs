/*
Reverse words in a given string
Example: Let the input string be “i like this program very much”. The function should change the string to “much very program this like i”

*/

#include<bits/stdc++.h>
using namespace std;

void reverse(char *begin,char *end);

void reverseWords(char *s){
	
	char *word_begin = s;
	char *temp = s;
	
	// reverse individual words of the entire string 
	while(*temp){
		temp++;
		if(*temp == '\0'){
			reverse(word_begin,temp-1);
		}
		else if(*temp == ' '){
			reverse(word_begin,temp-1);
			word_begin = temp + 1;
		}
	}	
	
	// reverse the entire string 
	reverse(s,temp-1);
}


void reverse(char *begin , char *end){
	
	char temp;
	
	while(begin < end){
	
	 temp = *begin;
	*begin++ = *end;
	*end-- = temp;
	
	}
}



int main(){
	char str[] = " I like this dog very much";
	
	reverseWords(str);
	
	cout << str;
	
	
	
}

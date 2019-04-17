/* 
Given two strings, copy one string to other using recursion. We basically need to write our own recursive version of strcpy in C/C++
Input : s1 = "hello"
        s2 = "geeksforgeeks"
Output : s2 = "hello"

Input :  s1 = "geeksforgeeks"
         s2 = ""
Output : s2 = "geeksforgeeks"


*/
#include<stdio.h>


void returnCopy(char s1[],char s2[],int index=0){
	
	s2[index] = s1[index];
	// terminating condition for recursion if s1 reaches null character
	if(s1[index] == '\0'){
		return;
	}
	
	
	returnCopy(s1,s2,index + 1);
}

int main(){
	char s1[100];
	char s2[100] = "";
	
	// scanf("%s",s1); = >  works only for string without whitespaces
	gets(s1);   // => works on strings with spaces
	returnCopy(s1,s2);
	printf("Copy of string s1 is %s",s2);
	
	return 0;
}

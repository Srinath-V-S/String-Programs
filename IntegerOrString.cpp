/*

Write a function to check whether a given input is an integer or a string.

Input : 127
Output : Integer
Explanation : All digits are in the range '0-9'.

Input : 199.7
Output : String
Explanation : A dot is present. 

Input : 122A
Output : String
Explanation : A alphabet is present.

*/


#include<bits/stdc++.h>
using namespace std;


bool isInteger(string str){

	// boolean array to keep track of character that are only numbers	
	bool num[str.length()] = {false};
	

	for(int i=0;i<str.length();i++){
		
		char ch = str[i];
		if(ch >= 48 && ch <= 57)
			num[i] = true;
	}
	
//	for(int j=0;j<str.length();j++){
//		cout << num[j] << endl;
//	}
	
	for(int i=0;i<str.length();i++){
		if(num[i] == false){
			return false;
		}
	}

	
	
	return true;
}


int main(){
	
	string str = "Mary1234";
	
	if(isInteger(str))
		cout <<"Integer";
	else
		cout << "String";
 	
	
	
	
	return 0;
}

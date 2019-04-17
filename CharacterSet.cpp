/*
Given a 26 letter character set, which is equivalent to character set of English alphabet
 i.e. (abcd….xyz) and act as a relation.
 We are also given several sentences and we have to translate them with the help of given new character set.
 
 
New character set : qwertyuiopasdfghjklzxcvbnm

Input : "utta"
Output : geek

Input : "egrt"
Output : cod
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	char charset[] = "qwertyuiopasdfghjklzxcvbnm";
	
	string str = "utta";
	char hashedCharSet[26];

	for(int i=0;i<26;i++){
		hashedCharSet[charset[i]-'a'] = 'a' + i;	
	}
	
//	for(int i=0;i<26;i++){
//		cout<< hashedCharSet[charset[i] -'a']<< endl;
//	}
	for(int i=0;i<str.length();i++){
		str[i] = hashedCharSet[str[i] - 'a'];
	}
		
	
	
	cout << str;
	return 0;
}

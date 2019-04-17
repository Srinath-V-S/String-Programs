/*

Given a string, check if all the characters of the string are same or not.


Input : s = "geeks"
Output : No

Input : s = "gggg" 
Output : Yes

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "ggggg";
	char ch = s[0];
	int flag = 0;
	for(int i=1;i<s.length();i++){
		if(ch == s[i]){
			continue;
		}
		else{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
		cout << "String contains different characters";
	else
		cout << "String contains same character";
	
	return 0;
}

/*
A Duck number is a number which has zeroes present in it, 
but there should be no zero present in the beginning of the number.
For example 3210, 8050896, 70709 are all duck numbers whereas 02364, 03401 are not.
The task is to check whether the given number is a duck number or not.

Input : 707069
Output : It is a duck number.
Explanation: 707069 does not contains zeros at the beginning.

Input : 02364
Output : It is not a duck number.
Explanation: in 02364 there is a zero at the beginning of the number.

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str = "03231300000000000000000000000021";
	
	int firstDig = str[0];
	int zeroCount = 0;
	for(int i=1;i<str.length();i++){
		
		if(str[i]=='0'){
			zeroCount++;
		}
	}
	
	if(firstDig!='0' && zeroCount > 0)
		cout << "Duck Number";
	else
		cout << " Not a Duck Number";
	
	return 0;
	}

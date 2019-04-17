/*
Given a positive integer n, round it to nearest whole number having zero as last digit.

Input : 4722
Output : 4720

Input : 38
Output : 40

Input : 10
Output: 10

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int num;
	cout << "Enter number : ";
	cin >> num;
	
	// create two variables for smaller multiple and larger multiple
	
	int a = (num/10) * 10; // smaller multiple
	int b =  a + 10;  // larger multiple
	
	
	if(num-a > b-num)
		cout << b;
	else
		cout << a;
	
	
	
	return 0;
}

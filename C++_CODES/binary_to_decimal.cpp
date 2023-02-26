#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int result=0,count=0;
	while(n!=0){
		result+=(n%10)*round(pow(2,count));
		
		n/=10;
		count++;
	}
	cout<<result;
	
}

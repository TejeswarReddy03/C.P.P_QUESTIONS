/*
print the following pattern for given N
   *
  ***
 *****
*******  

*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int x=1;
while(i<=n){
	int k=n-i;
while(k!=0){
	cout<<" ";
	k--;
}
int y=x;
while(y!=0){
	cout<<"*";
	y--;
}
cout<<endl;
x+=2;
	i=i+1;
}
}



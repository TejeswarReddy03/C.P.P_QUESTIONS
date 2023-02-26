/*
print the following pattern for given n
    1
   23
  345
 4567
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int k=n-i;
		while(k!=0){
			cout<<" ";
			k--;
		}
		int j=i;
	int x=1;
while(x<=i){
	cout<<j;
	j++;
	x++;
}
cout<<endl;
	i++;
	}
}



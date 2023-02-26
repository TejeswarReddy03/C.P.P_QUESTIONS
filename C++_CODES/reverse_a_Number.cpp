#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
bool statuss=false;
if(n==0){
	cout<<"0";
}
else{
while(n!=0 ){
  
       
		if((n%10)!=0){
			statuss=true;

		}
                if (statuss) {
                  cout << n % 10;
                }
                n /= 10;
}
}
}

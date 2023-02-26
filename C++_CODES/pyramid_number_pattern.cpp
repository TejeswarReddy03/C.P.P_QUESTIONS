/*
for n=5
    1
   212
  32123
 4321234
543212345

*/
#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i=1;
while(i<=n){

  int a=n-i;
  while(a!=0){
    cout<<" ";
    a--;
  }
  int b=i;
  while(b!=0){
    cout<<b;
    b--;
  }
  int c=2;
  while(c!=i+1){
    cout<<c;
    c++;
  }
  cout<<endl;
  i++;
}
  
}


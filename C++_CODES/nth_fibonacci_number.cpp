#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int f1=1,f2=1,nextterm=0;
if(n==1|| n==2){
        cout<<"1";
}
else{
nextterm=f1+f2;

for (int i = 3; i <= n; i++) {
  f1 = f2;
  f2 = nextterm;
  nextterm = f1 + f2;
}

cout << f2;
}
}
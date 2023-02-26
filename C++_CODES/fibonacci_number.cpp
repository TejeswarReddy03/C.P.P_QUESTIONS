#include<iostream>
using namespace std;
bool checkMember(int n){
int f1=0;
int f2=1;
int f3;
if(n==0 || n==1){
  return true;
}
while(n!=f3){
f3=f1+f2;
f1=f2;
f2=f3;
if(f3>n){
  return false;
}
else if(f3==n){
  return true;
}
}
return true;
}

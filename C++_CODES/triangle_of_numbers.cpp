
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int i=1;
int j=1;
while(i<=n){
    int k=n-i;
    while(k!=0){
        cout<<" ";
        k--;
    }
    int g=i;
    int v=i;
    while(g!=0){
        cout<<v;
        v++;
        g--;
    }
    int h=v-2;
    int d=i-1;
    while(d!=0){
        cout<<h;
        h--;
        d--;
    }
    
    cout<<endl;
    
    i++;
}
    return 0;
}
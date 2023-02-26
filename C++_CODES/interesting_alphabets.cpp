#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int l=1;
         int p=n-i;
        while(l<=i){
           
            cout<<char(65+p);
            p++;
            l++;
        }
        cout<<endl;
        i++;
    }
    
}

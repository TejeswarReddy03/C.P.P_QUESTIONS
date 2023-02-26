/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int a = i - 1;
        while (a != 0)
        {
            cout << "*";
            a--;
        }
        int v = i - 1;
        while (v != 0)
        {
            cout << "*";
            v--;
        }
        int b = n - i + 1;
        while (b > 0)
        {
            cout << b;
            b--;
        }
        cout << endl;

        i++;
    }
}

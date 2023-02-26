#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;
    int y = n / 2;
    int h = 1;
    while (i <= (n / 2) + 1)
    {

        int g = y;
        while (g != 0)
        {
            cout << " ";
            g--;
        }
        y--;
        int k = n - y;
        int j = 1;

        while (j <= h)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        h += 2;
        i++;
    }
    h -= 3;
    int r = 1;
    while (r <= n / 2)
    {
        int j = 1;
        while (j <= r)
        {
            cout << " ";
            j++;
        }

        int u = h - r;

        while (u != 0)
        {
            cout << "*";
            u--;
        }
        cout << endl;

        r++;
        h--;
    }
}

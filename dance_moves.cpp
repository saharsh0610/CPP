#include <bits/stdc++.h>
using namespace std;
int testCase, X, Y, Z;
int main()
{
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        cin >> X >> Y;
        Z = Y - X ;
        if (Z % 2 == 0)
        {
            cout << Z/2 << endl;
        }
        else if (Z % 2 != 0)
        {
            Z += 1;
            cout << (Z / 2) + 1 << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int testCase, X, k, Z;
int main()
{
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        cin >> X >> k;
        cout << X * 2 <<" "<< (X * k) * (X * k - 1) << endl;
    }
}
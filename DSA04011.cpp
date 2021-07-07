#include <bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;
long long toint(string s)
{
    long long res;
    for (int i = s.length() - 1; i >= 0; i--)
        res = (res + (s[i] - '0') * pow(2, s.length() - 1 - i-'0') % m) % m;
    return res%m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long long a = toint(s1);
        long long b = toint(s2);
        cout<< a*b <<endl;
    }
}
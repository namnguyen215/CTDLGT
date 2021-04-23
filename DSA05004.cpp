//DAY CON TANG DAI NHAT
//L[i] độ dài dãy con tăng tính đến a[i]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, len = 1;
    cin >> n;   
    int a[n + 7], L[n + 7];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        L[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                L[i] = max(L[j] + 1, L[i]);     
            }
        }
        len = max(L[i], len);
    }
    cout << len << endl;
}
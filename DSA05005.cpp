#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int key, dem = 0;
        for (int i = 1; i < n; i++)
        {
            bool ok = false;
            key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j--;
                ok = true;
            }
            if (ok)
                dem++;
            ok = false;
            a[j + 1] = key;
        }
        cout << dem << endl;
    }
}
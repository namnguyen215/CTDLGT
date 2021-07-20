#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1007];
int v, e;
bool chuaxet[1007];
int X[1007] = {0};
bool hmtpath;
void init()
{
    for (int i = 1; i <= v; i++)
        ke[i].clear();
    memset(chuaxet, true, sizeof(chuaxet));
    hmtpath = false;
}
void HMT(int k)
{
    for (int i = 0; i < ke[X[k - 1]].size(); i++)
    {
        int y = ke[X[k - 1]][i];
        if (hmtpath)
            return;
        if (k == v + 1)
        {
            hmtpath = true;
            return;
        }
        else if (chuaxet[y] == true)
        {
            X[k] = y;
            chuaxet[y] = false;
            HMT(k + 1);
            chuaxet[y] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        int v1, v2;
        cin >> v >> e;
        for (int i = 1; i <= e; i++)
        {
            cin >> v1 >> v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        bool ok = false;
        for (int i = 1; i <= v; i++)
        {
            chuaxet[i] = false;
            X[1] = i;
            HMT(2);
            if (hmtpath)
            {
                ok = true;
                cout << 1 << endl;
                break;
            }
        }
        if (ok == false)
            cout << 0 << endl;
    }
}
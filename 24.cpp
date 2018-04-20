#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("siruri.in");
    ofstream g("siruri.out");
    int n, m, i, j;
    f>>n>>m;
    int v1[1002], v2[1002];
    for(i = 1; i<=n; i++)
    {
        f>>v1[i];
        if(v1[i] == v1[i-1])
            i--, n--;
    }
    for(j=1; j<=m; j++)
    {
        f>>v2[j];
        if(v2[j] == v2[j-1])
            j--, m--;
    }
    f.close();
    int k;
    i = j = k = 1;
    int v3[1002];
    while(i<=n && j<=m)
    {
        if(v1[i] == v2[j])
        {
            v3[k] = v1[i];
            i++;
            j++;
        }
        else if(v1[i] > v2[j])
        {
            v3[k] = v2[j];
            j++;
        }
        else
        {
            v3[k] = v1[i];
            i++;
        }
        k++;
    }
    while(i<=n)
    {
        v3[k] = v1[i];
        i++;
        k++;
    }
    while(j<=m)
    {
        v3[k] = v2[j];
        j++;
        k++;
    }
    for(i=1; i<k; i++)
        g<<v3[i]<<' ';
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, v[5002];
    ifstream f("numere.in");
    int i;
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    int lgMax, pozMax;
    int lg, j;
    lgMax = pozMax = 1;
    nr = v[1];
    for(i = 1; i<=n; i++)
    {
        lg = 1;
        for(j=i+1; j<=n && v[i] == v[j]; j++)
            lg++;
        if(lg > lgMax)
            pozMax = i, lgMax = lg;
    }
    cout<<pozMax<<' '<<lgMax;
    return 0;
}

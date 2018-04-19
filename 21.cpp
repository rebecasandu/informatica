#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("cuvant.in");
    string c;
    f >> c;
    int n = c.length();
    string a;
    int i;
    for(i = 0; i<n; i++)
        a[n-i-1] = c[i];
    for(i = 0; i<n; i++)
    {
        if(a[i] != c[i])
        {
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA";
    return 0;
}

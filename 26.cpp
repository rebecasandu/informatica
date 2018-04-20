#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("numere.in");
    int n;
    f>>n;
    float v[1002];
    int i;
    for(i=1; i<=n; i++)
        f >> v[i];
    float x;
    f>>x;
    int st=1, dr=n, mij;
    while(st<dr)
    {
        mij = (st+dr)/2;
        if(v[mij] == x)
        {
            cout<<x<<" pe pozitia "<<mij;
            return 0;
        }
        else if(v[mij] < x)
            st = mij+1;
        else
            dr = mij-1;
    }
    cout<<"nu exista";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[25][25];
    int i, j;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i == j)
                a[i][j] = 2;
            else if(i<j)
                a[i][j] = 1;
            else
                a[i][j] = 3;
    return 0;
}

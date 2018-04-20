#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int Min[31];
    int i, j, x;

    for(j=1; j<=m; j++)
        cin >> Min[j];

    for(i=2; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            cin >> x;
            if(x < Min[j])
                Min[j] = x;
        }
    for(j=1; j<=m; j++)
        cout<<Min[j]<<' ';
    return 0;
}

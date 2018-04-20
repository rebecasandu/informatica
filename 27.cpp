#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char c[260];
    cin.getline(c, 256);
    char v[260][260];
    char *s = strtok(c, " ");
    int n = 0;
    while(s!=NULL)
    {
        strcpy(v[n++], s);
        s = strtok(NULL, " ");
    }
    strcpy(c,"");
    for(int i=n-1; i>=0; i--)
        strcat(c, v[i]), strcat(c, " ");

    cout<<c;
    return 0;
}

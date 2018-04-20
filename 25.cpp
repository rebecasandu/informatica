#include <iostream>
using namespace std;
int main()
{
    char c[260];
    cin.getline(c, 256);
    c[0]-=32;
    int i=0;
    while(c[i])
    {
        if(c[i] == ' ')
            c[i-1]-=32, c[i+1]-=32;
        i++;
    }
    c[i-1]-=32;
    cout<<c;
    return 0;
}

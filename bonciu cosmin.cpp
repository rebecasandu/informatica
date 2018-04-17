/*Se citeste un vector cu y elemente numere intregi in care elementele vectorului este de cel putin 2 cifre. Se cere:
 a) sa se formeze un nou vector care va contine numai numerele palindroame din primul vector
 b) sa se intercaleze cei doi vectori(descrescator)
 c) sa se verifice daca valoarea e citita de la tastatura se regaseste in vectorul interclasat(se va folosi algoritmul de cautare binara).
 observatie se vor afisa ambii vectori dupa rezolvarea punctului a) cat si rezolvarea b)dupa interclasare ,la c) se ca afisa pozitia pe care se regaseste valoarea e.*/

#include <iostream>

using namespace std;

int main()
{
    int L[100],P[100],Q[200],y,c,inv=0,i,j,k;
    cout<<"y=";cin>>y;
    c=y;
    for(i=1;i<=y;i++)
        cin>>L[i];
    while(y>0){ inv=inv*10+y%10;
                 y=y/10;}
      if(inv==c) cout<<P[];
             else cout<<"NU";
    cout<<"c=";cin>>c;
    for(i=0;i<y;i++){
        cout<<"L["<<i+1<<"]=";cin>>L[i];}
    for(j=0;j<c;j++){
        cout<<"P["<<j+1<<"]=";cin>>P[j]}
    i=0;
    j=0;
    k=0;
    while(i<y&&j<c)
    {
        if(L[i]<P[j]){Q[k]=L[i]; i++;}
                     {Q[k]=P[j]; j++;}
    k++;
    }
    if(i<y)
    while(i<y){Q[k]=L[i]; k++; i++;}
      else
    while(j<c)(Q[k]=P[j]; k++; j++;)
    for(k=0;k<y+c;k++)
       cout<<Q[k]<<" ";
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{int x,n,cn,cnt=0,pos=0,vpos[10000];bool found=false;
    cin>>x>>n;
    cn=n;
    while(cn)
    {
        cnt++;
        cn=cn/10;
    }
    int cifre[cnt];
    for(int i=0;i<=cnt;i++)
    {
        cifre[i]=n%10;
        n=n/10;
    }
    sort(cifre,cifre+cnt);
    do
    {
        for(int i = 0; i<cnt;i++)
        {
            if(pos+1==x)
            {
                cout<<cifre[i];
                found=true;
            }
        }
        pos++;
    } while ( next_permutation(cifre,cifre+cnt) );
    if(found==false)
        cout<<"-1";
    return 0;
}

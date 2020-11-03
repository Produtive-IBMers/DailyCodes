#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i=1;
    cin>>t;
    while(t--){
        i++;
        long long int a,b,c,chk=0;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            chk=1;
        else if(a==0 && b==0)
            chk=0;
        else{
            long long int g = __gcd(a,b);
            if(c%g==0)
                chk=1;
            else
                chk=0;
        }
        if(chk)
            cout<<"Case "<<i<<": Yes"<<'\n';
        else
            cout<<"Case "<<i<<": No"<<'\n';
        
    }
    

    return 0;
}

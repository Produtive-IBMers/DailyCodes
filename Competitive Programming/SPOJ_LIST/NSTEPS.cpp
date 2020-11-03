#include "bits/stdc++.h"
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t , a , b;
    cin >> t;
    while(t-->0 && cin >> a >> b)
    {
        if(a==b)
        {
            if(a%2==0)
                cout << 2*a << endl;    
            else

                cout << 2*a - 1 << endl;
        }
        else if((a-b)==2)
        {
            if(a%2==0)
                cout << a + b << endl;
            else
                cout << a + b - 1 << endl;
        }
        else
            cout << "No Number" << endl;
    }
}

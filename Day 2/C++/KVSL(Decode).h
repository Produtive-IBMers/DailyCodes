#include<iostream>
using namespace std;
int main()
{
int t;cin>>t; while(t--){
    string s; cin>>s; 
    int n = s.size(), i=n-1, j = n/2-1;
    string result;
    while(true){
        if(i<n/2 && j<0) break;
        result.push_back(s[i--]);
        if(j>=0) result.push_back(s[j--]);
    }
    cout<<result<<"\n";
}
return 0;
}
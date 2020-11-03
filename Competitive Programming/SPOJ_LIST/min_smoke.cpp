
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long ;
const ldb pi=3.141592653589793238462643383;
int a[1000];
long long sum(long long s,ll e){
	ll ans = 0;
	for(int i=s;i<=e;i++){
		ans+=a[i];
		ans%=100;
	}
	return ans;
}
long long minSmoke(int *a, int i,int j, ll dp[][100]){
	if(i>=j){
		dp[i][j]=0;
		return 0;
	}
	if(dp[i][j]!=-1)return dp[i][j];
	dp[i][j]= INT_MAX;
	for(int k=i;k<=j;k++){
		dp[i][j]= min(dp[i][j],minSmoke(a,i,k,dp)+minSmoke(a,k+1,j,dp)+(sum(i,k)*sum(k+1,j)));
	}
	return dp[i][j];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        ll dp[100][100];
        memset(dp,-1,sizeof(dp));
        minSmoke(a,1,n-1,dp);
        cout<<'\n';
    }
    return 0;
}
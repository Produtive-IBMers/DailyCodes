#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,mm,ll,l,m,t;
	vector<int>v;
	cin>>n;
		for(int i=0;i<n;i++)
		{
			int flag11=0;
			cin>>t;
			for(int ll=0;ll<v.size();ll++)
			{if(v[ll]==t)
				{
					flag11=1;break;
				}
				
			}
			if(flag11==0)
			v.push_back(t);
			cin>>l;
			for(int j=0;j<l;j++)
			{
				cin>>m;int flag=0;
				for(int mm=0;mm<v.size();mm++)
				{	if(v[mm]==m)
				{
					flag=1;break;
				}
				}
				if(flag==0)
				v.push_back(m);
			}
		}cout<<v.size()-n;
	}

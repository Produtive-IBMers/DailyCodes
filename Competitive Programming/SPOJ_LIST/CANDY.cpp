#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		float sum=0;
		if(n==-1)
		break;
		int a[n];
		int count=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		float k=sum/n;
		if(floor(k)==ceil(k))
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j]<k)
				{
					int ss=a[j];
					while(ss!=k)
					{
					count++;ss++;
				}
			}
		}	cout<<count<<"\n";
	}
		else
		{
			cout<<"-1\n";
		}
	}
}

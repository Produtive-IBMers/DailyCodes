#include<iostream>
using namespace std;
 
int main(){
	long h,p,q;
	cin>>h>>p>>q;
	//cout<<h<<p<<q;
	if(p<=q){
		cout<<"-1"<<endl;
		return 0;
	}else if(h<(p-q)){
		cout<<"1"<<endl;
		return 0;
	}
	if(p>h){
		cout<<1<<endl;
		return 0;
	}
	long res;
	//if(h%(p-q)==0){
	res = h/(p-q);
	// }else{
	// 	res = (h/(p-q))+1;
	// }
	//long res =  h/(p-q);
	if((p-q)*(res-1)+p>=h)
	cout<<res<<endl;
	else
	cout<<res+1<<endl;
	
	//cout<<res<<endl;
	return 0;
}
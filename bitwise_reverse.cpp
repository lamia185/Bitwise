#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,t,r,R,i,m;
	
	cin>>a;
	double s,l;
	s=(double)a;
	l=log2(s);
	m=ceil(l);
	cout<<m<<endl;
	
	for(i=m-1;i>=0;i--){
		t=(a&1);
		r=(t<<i);
		R|=r;
		a=(a>>1);
		r=0;
		t=0;
	}
	
	cout<<R<<endl;
}

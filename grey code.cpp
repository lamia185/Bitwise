#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,t,r,R,i,m,z,b,c,x,y;
	
	cin>>a;
	x=a;
	double s,l;
	s=(double)a;
	l=log2(s);
	m=ceil(l);
	
	for(i=0;i<m-1;i++){
		t=(a&1);
		a=(a>>1);
		b=(a&1);
		c=(t^b);
		r=(c<<i);
		R|=r;
	}
	y=(x>>(m-1));
	y=(y&1);
	r=(y<<(m-1));
	R|=r;
	
	cout<<R<<endl;
  
}

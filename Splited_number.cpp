#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,t,r,R,i,m,z,b,c,x,y,one=0,n;

  while(1){
	cin>>a;
	if(a==0)
	return 0;
	one=0;
	r=0;
	x=0;
	y=0;
	int R1=0;
	int R2=0;
	double s,l;
	s=(double)a;
	l=log2(s);
	m=ceil(l);
	
	for(i=0;i<=m;i++){
	  r=0;
	  if(i!=0)
	  a=(a>>1);
	  t=(a&1);
	  
	  if(t==1){
	    one++;
	    if(one%2==0){
	      x=(1<<i);
	      R2|=x;
	    }
	    
	    else{
	      r=(1<<i);
	      R1|=r;
	    }
	  }
	  
	}
	
	cout<<R1<<" "<<R2<<endl;
}
  
}

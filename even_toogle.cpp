/*
//Another way
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,t,r,R=0,i,m,k,count=0;
	
	cin>>a;
	double s,l;
	s=(double)a;
	l=log2(s);
	m=ceil(l);

	for(i=0;i<m;i++){
	  count=i+1;
	  if(count%2!=0){
	    t=(a&1);
	    r=(t<<i);
	    R|=r;
	    a=(a>>1);
	    r=0;
	    t=0;
	  }
	  else{
	    
	    t=(a&1);
	    t^=1;
	    r=(t<<i);
	    R|=r;
	    a=(a>>1);
	    t=0;
	    r=0;
	  }
	  
	}
	
	cout<<(R)<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,t,r,R=0,i,m,k,count=0;
	
	cin>>a;
	double s,l;
	s=(double)a;
	l=log2(s);
	m=ceil(l);
	
	for(i=0;i<m;i++){
	  count=i+1;
	  if(count%2==0){
	    k=(1<<i);
	    a=(a^k);
	  }
	 
	}
	
	cout<<(a)<<endl;
}

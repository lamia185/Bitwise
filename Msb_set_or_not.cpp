#include<bits/stdc++.h>
#define bits sizeof(int)*8
using namespace std;

int main(){
	int n,msb;
	
	cin>>n;
	msb=1<<(bits-1);
	
	if(n & msb)
	cout<<"set"<<endl;
	
	else cout<<"Not set"<<endl;
}

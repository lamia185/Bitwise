#include<bits/stdc++.h>
#define bits sizeof(int)*8
using namespace std;

int main(){
	int num,n,bit;
	
	cin>>num>>n;
	bit=(1<<n) |num;
	
	if(bit)
	cout<<"set"<<endl;
	else cout<<"Not set"<<endl;
}

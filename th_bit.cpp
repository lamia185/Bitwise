#include<bits/stdc++.h>
#define bits sizeof(int)*8
using namespace std;

int main(){
	int num,n,bit;
	
	cin>>num>>n;

	bit=(num>>n)&1;
	
	cout<<bit<<endl;
}

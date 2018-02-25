#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,n,bit;
	
	cin>>num>>n;

	bit=(num&(~(1<<n)));
	
	cout<<bit<<endl;
}

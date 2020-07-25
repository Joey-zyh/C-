#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	char a;
	cin>>n;
	cin>>a;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
			cout<<a;
		}
		cout<<endl;
	}
}

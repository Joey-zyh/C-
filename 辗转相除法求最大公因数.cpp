#include<iostream>
using namespace std;
int main(){
	int m,n,k;
	cin>>m>>n;
	k=m%n;
	while(k!=0){
		m=n;
		n=k;
		k=m%n;
	}
	
	cout<<n<<endl;
	return 0;
}

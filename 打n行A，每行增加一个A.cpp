#include<iostream>
using namespace std;
int n;
void pr(int k){
	if(k>0){
		for(int i=0;i<n-k+1;i++){//�������԰�i<n-k+1����i<k
			cout<<"A";
		}
		cout<<endl;
		pr(k-1);
	}
	return;
}
int main(){
	cin>>n;
	pr(n);
	return 0;
}

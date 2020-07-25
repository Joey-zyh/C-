#include<iostream>
using namespace std;
int a[3001],b[3001];
int main(){
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int i=1;int z=1;b[z]=a[i];i++;
	while(i<=n){
		k=1;
		for(int j=1;j<=z;j++){
			if(a[i]<=b[j]){
				b[j]=a[i];
				k=0;
				i++;
				break;
			}
		}
		if(k==1){
			z++;
			b[z]=a[i];
			i++;
		}
	}
	cout<<z<<endl;
	return 0;
}

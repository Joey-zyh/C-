#include<iostream>
using namespace std;
int a[3001],b[3001],c[3001],d[3001];
int main(){
	int n,max;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[n]=1;
	for(int i=n-1;i>=1;i--){
		max=0;
		for(int j=i+1;j<=n;j++){
			if(a[i]>=a[j]){
				if(b[j]>max)max=b[j];
			}
		}
		b[i]=max+1;
	}
	max=0;
	for(int i=1;i<=n;i++){
		if(b[i]>max) max=b[i];
	}
	cout<<max<<endl;
} 

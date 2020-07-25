#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	int t,j,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=1;i<n;i++){
		t=a[i];
		j=i-1;
		while(j>=0&&t<a[j]){
			a[j+1]=a[j];
			j--;
		}
		if(j+1!=i)
		a[j+1]=t;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

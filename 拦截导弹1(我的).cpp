#include<iostream> 
using namespace std;
int main(){
	int a[3000],b,c[3000],d=0,k=0;
	cin>>b;
	for(int z=1;z<=b;z++){
		cin>>a[z];
	} 
	for(int i=1;i<=b;i++){
		if(a[i]>a[i-1]){//可以试试改成if(a[i]>c[k]);现在的情况下可以将与k有关的都去掉去掉 
			d=d+1;
			c[k+1]=a[i];
			k++;
		}
		}
		cout<<d;
		cout<<endl;
		for(int j=1;j<=b;j++)cout<<c[j]<<" ";
		return 0;
}//尝试一下能否将数组c省去 

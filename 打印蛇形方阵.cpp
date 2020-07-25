#include<iostream>
using namespace std;
int main(){
	int n,k,a[100][100];
	cin>>n;
	k=1;
	for(int s=2;s<=n+1;s++){
		if(s%2!=0){
			for(int i=1;i<=s-1;i++){
				a[i][s-i]=k;
				k++;
			}
		}
		else{
			for(int j=1;j<=s-1;j++){
				a[s-j][j]=k;
				k++;
			}
		}
	}
	for(int s=n+2;s<=n+n;s++){
		if(s%2!=0){
			for(int i=n;i>=s-n;i--){
				a[s-i][i]=k;
				k++;
			}
		}
		else{
			for(int j=n;j>=s-n;j--){
				a[j][s-j]=k;
				k++;
			}
		}
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)cout<<a[i][j]<<" ";
		cout<<endl;
}
	return 0;
}

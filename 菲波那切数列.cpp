#include<iostream>
using namespace std;
int fb(int k){
	if(k==1||k==2){
		return(1);
	}
	else{
		return(fb(k-1)+fb(k-2));
	}
}
int main(){
	int n;
	cin>>n;
	cout<<fb(n)<<endl;
	return 0;
}

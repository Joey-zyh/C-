#include<iostream>
using namespace std;
int sum=0;
void move(char a,char b,char c,int n){
	if(n>=1){
		move(a,c,b,n-1);
		cout<<a<<"-->"<<b<<endl;
		sum++;
		move(c,b,a,n-1);
	}
	return;
}
int main(){
	char a='a',b='b',c='c';
	int n;
	cin>>n;
	move(a,b,c,n);
	cout<<sum<<endl;
	return 0;
}

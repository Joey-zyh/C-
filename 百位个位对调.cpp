#include<iostream>
using namespace std;
int main(){
	int sn,g,s,b,d;
	cin>>sn;
	b=sn/100;
	s=(sn-100*b)/10;
	g=sn-100*b-10*s;
	d=g*100+s*10+b;
	cout<<d;
}

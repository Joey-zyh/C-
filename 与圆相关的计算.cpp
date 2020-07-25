#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double Pi=3.14159,r,d,C,S;
	cin>>r;
	d=2*r;
	C=Pi*d;
	S=Pi*r*r;
	cout<<setprecision(4)<<std::fixed<<d;
	cout<<" ";
	cout<<setprecision(4)<<std::fixed<<C;
	cout<<" ";
	cout<<setprecision(4)<<std::fixed<<S;
	cout<<" ";
	return 0;
} 

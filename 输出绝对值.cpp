#include<bits/stdc++.h>
using namespace std;
int main(){
	double a;
	cin>>a;
	if(a>=0){
		cout<<setprecision(2)<<std::fixed<<a<<endl;
	}
	else{
		a=0-a;
		cout<<setprecision(2)<<std::fixed<<a<<endl;
	}
} 

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float r1,r2,R;
	cin>>r1>>r2;
	R=1/(1/r1+1/r2);
	cout<<setprecision(2)<<std::fixed<<R;
	return 0;
}

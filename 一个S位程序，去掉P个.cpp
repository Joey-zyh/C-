#include<iostream>
#include<string>
using namespace std;
int main(){
	string n;
	int s,i;
	cin>>n;
	cin>>s;
	while(s>0){
		i=0;
		while(i<n.size()-1&&n[i]<=n[i+1]) i++;
		n.erase(i,1);
		s--; 
	}
	i=0;
	while(n[i]=='0'&&n.size()>1) n.erase(i,1);
	cout<<n<<endl;
	return 0;
}

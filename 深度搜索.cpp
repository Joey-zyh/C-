#include<iostream>
using namespace std;

void dfs(int q){
	if(q>k){
		sum++;
	}
	else{
		for(int i=1;i<=n;i++){
			a[q]=i;
			dfs(q+1)
		}
	}
}

int main(){
    int n,k;
	cin>>n>>k;
	
}

#include<iostream>
using namespace std;
int n;
int a[100];

void meger(int a[],int l,int r,int m){
	int p=1,q=m+1,len=r-l+1,i=0;
	int *b=new int[len];//新建一个数组b，指针指向它 
	while(p<=m&&q<=r){
		if(a[p]<=a[q])
		    b[i++]=a[p++];
		else
		    b[i++]=a[q++];	
	}
	while(p<=m) b[i++]=a[p++];// 
	while(q<=r) b[i++]=a[q++];//两者只执行一句 
	for(int j=0;j<len;j++) a[l+j]=b[j];
	delete []b;//删除b数组 
	return;
} 

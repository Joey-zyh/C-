#include<iostream>
using namespace std;
int a[1000],b[1000],c[1000];//ϰ���԰����鿪�����棬����ѭ����ϵͳ��Ϊ�Ǹ�����Σ������С����Լ����c���� 
int main(){
	int n1,n2,p=1,q=1,k=1;//pΪa�������qΪb�������,kΪc������� 
	cin>>n1;
	for(int i=1;i<=n1;i++) cin>>a[i];
	cin>>n2;
	for(int i=1;i<=n2;i++) cin>>b[i];
	while(p<=n1&&q<=n2){
		if(a[p]<b[q]){
			c[k]=a[p];
			p++;k++;
		}
		else{
			c[k]=b[q];
			q++;k++;
		}
	}
	while(p<=n1){
		c[k]=a[p];p++;k++;
	}
	while(q<=n2){
		c[k]=b[q];q++;k++;
	}
	for(int z=1;z<=n1+n2;z++){
		cout<<c[z]<<" ";
	}
	return 0;
} 

#include<iostream> 
using namespace std;
int main(){
	int a[3000],b,c[3000],d=0,k=0;
	cin>>b;
	for(int z=1;z<=b;z++){
		cin>>a[z];
	} 
	for(int i=1;i<=b;i++){
		if(a[i]>a[i-1]){//�������Ըĳ�if(a[i]>c[k]);���ڵ�����¿��Խ���k�йصĶ�ȥ��ȥ�� 
			d=d+1;
			c[k+1]=a[i];
			k++;
		}
		}
		cout<<d;
		cout<<endl;
		for(int j=1;j<=b;j++)cout<<c[j]<<" ";
		return 0;
}//����һ���ܷ�����cʡȥ 

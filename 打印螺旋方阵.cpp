#include<iostream>
using namespace std;
int main(){
	int n,k,r,m;

	int a[100][100];//������ά�����Դ洢���� 
	cin>>n;
	k=0;r=n-1;m=0;
	while(r>0){
		m++;
		for(int i=m;i<=m+r-1;i++){
			k++;
			a[i][m]=k;
			a[r+m][i]=k+r;
			a[n-i+1][m+r]=k+2*r;
			a[m][n-i+1]=k+3*r;
		}
		k=k+3*r;r=r-2;
	}
	if(n%2!=0) a[m+1][m+1]=n*n;/*�ж����������м��Ƿ���Ҫ�����֣����Խ���һ�д���ɾȥ����һ��Ч����*/ 
	for(int i=1;i<=n;i++){//��ӡ�������� 
		for(int j=1;j<=n;j++)cout<<a[j][i]<<" ";
		cout<<endl;
}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int y,m,d;
	cout<<"�����������գ��м��ÿո�����"<<endl;
	cin>>y>>m>>d;
	cout<<y<<"��"<<m<<"��"<<d<<"����";
	if(m==1||m==2){
        m=m+12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(iWeek)
    {
    case 0: printf("����һ"); break;
    case 1: printf("���ڶ�"); break;
    case 2: printf("������"); break;
    case 3: printf("������"); break;
    case 4: printf("������"); break;
    case 5: printf("������"); break;
    case 6: printf("������"); break;
    }
}


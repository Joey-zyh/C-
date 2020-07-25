#include<iostream>
using namespace std;
int main()
{
	int y,m,d;
	cout<<"请输入年月日，中间用空格连接"<<endl;
	cin>>y>>m>>d;
	cout<<y<<"年"<<m<<"月"<<d<<"日是";
	if(m==1||m==2){
        m=m+12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(iWeek)
    {
    case 0: printf("星期一"); break;
    case 1: printf("星期二"); break;
    case 2: printf("星期三"); break;
    case 3: printf("星期四"); break;
    case 4: printf("星期五"); break;
    case 5: printf("星期六"); break;
    case 6: printf("星期日"); break;
    }
}


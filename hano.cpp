// hano.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void move(char first,char third)
{
	cout<<first<<"-->"<<third<<endl;
}

void hano(int n,char first,char second,char third)
{
	if(n==1)
		move(first,third);
	else
	{
		hano(n-1,first,third,second);
		move(first,third);
		hano(n-1,second,first,third);
	}

}


int _tmain(int argc, _TCHAR* argv[])
{
	int m;
	cout<<"输入盘子数：";
	cin>>m;
	cout<<"步骤是"<<endl;
	hano(m,'A','B','C');
	system("pause");
	return 0;
}


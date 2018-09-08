// set.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<set>
#include<iterator>
#include<utility>
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	set<double> s;
	while(true){
		double v;
		cin>>v;
		if(v==0) break;
		pair<set<double>::iterator,bool>r=s.insert(v);
		if(!r.second)
			cout<<v<<"is duplicated"<<endl;}
	set<double>::iterator iter1=s.begin();//得到第一个元素的迭代器
	set<double>::iterator iter2=s.end();//得到末尾的迭代器
	double medium=(*iter1+*(--iter2))/2;//得到最大值与最小值的中值
	cout<<"<=medium:";//输出小于或等于中值的元素
	copy(s.lower_bound(medium),s.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	return 0;
}


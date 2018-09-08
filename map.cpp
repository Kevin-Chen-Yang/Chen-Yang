// map.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<map>
#include<iostream>
#include<string>
#include<utility>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	map<string,int>courses;
	courses.insert(make_pair("C++",3));//将课程信息插入到映射中
	courses.insert(make_pair("C#",3));
	courses.insert(make_pair("C",2));
	courses.insert(make_pair("JAVA",4));
	courses.insert(make_pair("PHP",2));
	int n=3;
	int sum=0;
	while(n>0){
		string name;
		cin>>name;
		map<string,int>::iterator iter=courses.find(name);//查找课程
		if(iter==courses.end())
			cout<<name<<"is not avaliable"<<endl;
		else
		{sum+=iter->second;//累加学分
		courses.erase(iter);//将刚选过的课程从映射中删除
		n--;}}
	cout<<"Total credit:"<<sum<<endl;//输出总学分
	system("pause");
	return 0;
}


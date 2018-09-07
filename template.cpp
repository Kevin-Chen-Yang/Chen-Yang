// 类模板.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdlib>
#include<iostream>
using namespace std;

struct Student{int id; float gpa;};

template <class T>//类模板定义
class Store
{
private:
	T item;
	bool haveValue;
public:
	Store();
	T &getElem();
	void putElem(const T &x);
};
template<class T>
Store<T>::Store():haveValue(false){}
template<class T>
T &Store<T>::getElem(){
	if(!haveValue){
		cout<<"No item present!"<<endl;
		exit(1);
	}
	return item;
}
template<class T>//类成员函数定义
void Store<T>::putElem(const T &x){
	haveValue=true;
	item=x;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Store<int> s1,s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout<<s1.getElem()<<" "<<s2.getElem()<<endl;

	Student g={1000,23};
	Store<Student>s3;
	s3.putElem(g);
	cout<<"The student ID is:"<<s3.getElem().id<<endl;

	Store<double> d;
	cout<<" Retrieving object D...";
	cout<<d.getElem()<<endl;
	system("pause");
	return 0;
}


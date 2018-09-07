// 简单选择排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void swap(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void Swap(int &x, int &y){
	int temp;
	temp=y;
	y=x;
	x=temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"plz put in numbers:";
	int *a,n;
	cin>>n;
	cout<<"put in integer:";
	a=new int[n];
	for(int i=0;i<=n;i++){
		cin>>a[i];}
	cout<<"数组为:";
	for(int i=0;i<=n;i++){
		cout<<a[i]<<"   ";}
	cout<<endl;
	cout<<"简单逆序后为：";
	for(int i=0;i<=n;i++){
		int min=i;
		for(int j=0;j<=n;j++){
			if(a[j]<a[min])
				min=j;
			swap<int>(a[i],a[min]);
		}
	}
		for(int i=0;i<=n;i++){
		cout<<a[i]<<"   ";}
		cout<<endl;

		cout<<"简单顺序后为：";
		for(int i=0;i<=n;i++){
		int min=i;
		for(int j=0;j<=n;j++){
			if(a[j]>a[min])
				min=j;
			swap(a[min],a[i]);
		}
	}
		for(int i=0;i<=n;i++){
		cout<<a[i]<<"   ";}
	system("pause");

}


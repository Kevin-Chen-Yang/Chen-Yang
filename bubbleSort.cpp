// 起泡排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void Swap(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}

template<class T>
void bubbleSort(T a,int n){
	int i=n-1;
	while(i>0){
		int lastExchange=0;
		for(int j=0;j<i;j++)
			if(a[j+1]<a[j]){
				Swap(a[j],a[j+1]);
				lastExchange=j;
			}
			cout<<"take one time!"<<endl;
			i=lastExchange;
	}}
int _tmain(int argc, _TCHAR* argv[])
{
	int n ;
	cout<<"plz put in numbers:";
	cin>>n;
	int *a=new int [n] ;
	cout<<"plz put in integer:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubbleSort<int *>(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"   ";
	system("pause");
	delete []a;
	return 0;
}


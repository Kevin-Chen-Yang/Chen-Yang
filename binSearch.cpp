// 折半查找.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template<class T>//交换
void Swap(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
template<class T>//起泡排序
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
template<class T>//折半查找
int binSearch( T list,int n,const int &key)
{
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	while(low<=high){
		mid=(low+high)/2;
		if(key<list[mid])
			high=mid-1;
		else if(key==list[mid])
			return mid;
		else if(key>list[mid])
			low=mid+1;
		cout<<"执行了一次查找"<<endl;
	}
	return mid;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n,key,b;
	cout<<"plz put in numbers:";//输入元素个数
	cin>>n;
	cin.ignore(numeric_limits<std::streamsize>::max()); //清除输入缓冲区里所有内容 
	cout<<"plz put in integer:";
	int *a=new int [n];//动态内存分配
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubbleSort<int *>(a,n);//起泡排序
	cout<<"排序后数组："<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"   ";
	cout<<endl;
	cout<<"输入查询数：";
	cin.ignore(numeric_limits<std::streamsize>::max(),'\n');//清除输入缓冲区的当前行 
	cin>> key;
	b=binSearch<int *>(a,n,key);
	cout<<"该数位于数组下标为"<<b<<"的位置！"<<endl;
	system("pause");
	return 0;
}


#include<iostream>
using namespace std;
int swap(in *p,int *q)
{
 int temp=*p;
 *p=*q;
 *q=temp;
}
int main()
{
 int a=10,b=20;
 cout<<a<<b;
 swap(&a,&b);
 cout<<a<<b;
}

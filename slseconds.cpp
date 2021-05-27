//simple program to find out largest,smallest and second_smallest element in the array;
#include<iostream>
using namespace std;
int smallest(int p[],int num)
{
	int a=p[0],i;
	for(i=0;i<num;i++)
	{
		if(a>p[i])
			a=p[i];
	}
	cout<<"smallest : "<<a<<"\n";
	return a;
}
int sec_smallest(int p[],int num)
{
	int s=p[0],i;
	int sec_s=p[1];
	if(p[1]<p[0])
	{
		s=p[1];
		sec_s=p[0];
	}
	for(i=2;i<num;i++)
	{
		if(sec_s>p[i])
		{
			if(s>p[i])
			{
				sec_s=s;
				s=p[i];
			}
			else
				sec_s=p[i];
		}
	}
	cout<<"second smallest : "<<sec_s<<"\n";
	return sec_s;
}
int largest(int p[],int num)
{
	int a=p[0],i;
	for(i=0;i<num;i++)
	{
		if(p[i]>a)
			a=p[i];
	}
	cout<<"largest : "<<a<<"\n";
	return a;
}
int main()
{
	int n,a,b,c,i;
	int *p=new int;
	cout<<"enter number of elements\n";
	cin>>n;
	p[n];
	for(i=0;i<n;i++)
		cin>>p[i];
	a=smallest(p,n);
	b=sec_smallest(p,n);
	c=largest(p,n);
	return 0;
}
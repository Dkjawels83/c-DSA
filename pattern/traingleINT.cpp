#include<iostream>
using namespace std;
int main ()
{
	int n=4;
	char ch='A';
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<i+1;j++)
//		{
//			cout<<i+1;
//		}
//		cout<<endl;
//	}
for(int i=0;i<n;i++)
{
	for(int j=0;j<=i;j++)
	{
		cout<<ch;
	}
	cout<<endl;
	ch++;
}
}

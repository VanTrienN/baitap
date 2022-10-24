#include<bits/stdc++.h>
using namespace std;
float gt(int n)
{
	int gt=1;
	for(int i=1;i<=n;i++)
	{
		gt=gt*i;
	}	
return gt;
}
float tinh1(int x, int n)
{
	float tong=0;
	for(int i=1;i<=n;i++)
		tong=tong+pow(x,i)/gt(i);
return tong;
}
float tinh2(int x, int n)
{
	float tong=1;
	for(int i=1;i<=n;i++)
		tong=tong+pow(x,2*i)/gt(2*i);
return tong;	
}
float tinh3(int x, int n)
{
	float tong=1+x;
	for(int i=1;i<=n;i++)
		tong= tong+ pow(x,2*i+1)/gt(2*i+1);
return tong;
}	
int main()
{
	int x,n;
	cout<<"nhap gtri x: ";cin>>x;
	cout<<"nhap gtri n: ";cin>>n;
	cout<<"Sn1= "<<tinh1(x,n)<<endl;
	cout<<"Sn2= "<<tinh2(x,n)<<endl;
	cout<<"Sn3= "<<tinh3(x,n)<<endl;	
}

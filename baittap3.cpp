#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem,i;
	do
	{
		cout<<"nhap gtri n:";cin>>n;	
	}
	while(n<0);
	dem=0;
	for (i=1;i<=n;i++)
		if(n % i == 0)
			dem++;
	if (dem==2)
		cout<<n<<" la so nguyen to";
	else
		cout<<n<<" khong la so nguyen to";

}

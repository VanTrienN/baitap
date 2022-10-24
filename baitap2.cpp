#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"nhap nam :";
		cin>>n;
	}	
	while(n<=0);
	if(n%4==0 && n%100!=0)
		cout<<"nam "<<n<<" la nam nhuan";
	else
		cout<<"nam "<<n<<" khong phai la nam nhuan";
}

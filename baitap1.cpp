#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"nhap thang trong nam: ";cin>>n;
	}	
	while(n<=0);
	cout<<"so ngay trong thang "<<n<< "la: ";
	switch(n)
	{
		case 1:
			cout<<31;
			break;
		case 2:
			cout<<28;
			break;
		case 3:
			cout<<31;
			break;
		case 4:
			cout<<30;
			break;
		case 5:
			cout<<31;
			break;
		case 6:
			cout<<30;
			break;
		case 7:
			cout<<31;
			break;
		case 8:
			cout<<31;
			break;
		case 9:
			cout<<30;
			break;
		case 10:
			cout<<31;
			break;
		case 11:
			cout<<30;
			break;
		case 12:
			cout<<31;
			break;
	}
		
}

#include<bits/stdc++.h>
using namespace std;
void nhap(int *a, int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu:"<<i+1<<endl;
		cin>>a[i];
	}
}
void xuat(int *a, int &n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
void xoa(int *a, int &n, int k) 
{
	int i;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1]; 
	 } 
	 n--; 
}
int main()
{
	int n;
	int k;
	cout<<"nhap so phan tu trong mang: ";cin>>n;
	int *a=new int[n];
	nhap(a,n);
	cout<<"mang sau khi nhap"<<endl;
	xuat(a,n);
	cout<<endl;
	cout<<"nhap vi tri muon xoa: ";cin>>k;
	xoa(a,n,k);
	cout<<"mang sau khi xoa"<<endl;
	xuat(a,n);
	delete []a;
	return 0;
}

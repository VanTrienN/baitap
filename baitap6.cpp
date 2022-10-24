#include<bits/stdc++.h>
using namespace std;
void nhapmang(int **a,int x,int y)
{
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
			
}
void xuatmang(int **a,int x,int y)
{	
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
		
}
void tong(int **a,int **b,int x, int y)
{
	int **c;
	c=new int*[x];
	for(int i=0;i<x;i++)
		c[i]=new int[y];
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			c[i][j]=a[i][j]+b[i][j];
	xuatmang(c,x,y);
}
void hieu(int **a,int **b,int x, int y)
{
	int **c;
	c=new int*[x];
	for(int i=0;i<x;i++)
		c[i]=new int[y];
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			c[i][j]=a[i][j]-b[i][j];
	xuatmang(c,x,y);
}
main()
{
	int x,y;
	int **a; int **b;
	cout<<"nhap so hang ma tran: ";cin>>x;
	cout<<"nhap so cot ma tran: ";cin>>y;
	a=new int*[x];
	b=new int*[x];
	for(int i=0;i<x;i++)
	{
		a[i]=new int[y];
		b[i]=new int[y];
	}
	cout<<"Nhap ma tran A: "<<endl;
	nhapmang(a,x,y);
	cout<<"Nhap ma tran B: "<<endl;
	nhapmang(b,x,y);
	cout<<"Ma tran A: "<<endl;
	xuatmang(a,x,y);
	cout<<"Ma tran B: "<<endl;
	xuatmang(b,x,y);
	cout<<"tong 2 ma tran A va B: "<<endl;
	tong(a,b,x,y);
	cout<<"hieu 2 ma tran A va B: "<<endl;
	hieu(a,b,x,y);
}

#include<iostream>
#define swap(x,y,t){ t=x; x=y; y=t; }
using namespace std;
int main()
{
	int key,index,i,n,t,j,k,a[100];
	cout<<"Enter the number of elements of an array\n";
	cin>>n;
	cout<<"Enter the elements of an array\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=key;8888888888888888888i
		
		cout<<"After "<<i<<" sorting \n";
		for(k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<"\n";		
	}
	return 0;
}

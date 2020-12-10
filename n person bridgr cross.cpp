#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>

using namespace std;
int arr[] = {2, 3, 5,  10};
int main()
{

int i=0,j,k,left[10],right[10],count,finish=0,case1=0,case2=0,finish1=0,finish2=0,max,flag,time,a=0;

int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);

//making left & right array of people accross the river to be zero. If visited then making 1.
for(i=0;i<n;i++)
{
	left[i]=0;
}
for(i=0;i<n;i++)
{
	right[i]=0;
}


for(;finish!=n;)
{
    //case1
for(i=0;i<2;i++)
{
left[0]=1;finish1++;count=1;
for(j=n-1;count<2 && j>=0;j--)
{
	if(left[j]==0)
	{
		left[j]=1;finish1++;
		if(count==1)  max=j;
		count++;
	}
}
case1+=arr[max];
if(finish1==n) break;
else
{
left[0]=0;finish1--;
case1+=arr[0];
}
}

//case2
for(k=0;k<2;k++)
{
	if(right[k]==0)
	{right[k]=1;finish2++;flag=k;}
}
case2+=arr[flag];
if(finish2!=n){
for(i=0;i<2;i++)
{
for(k=0;k<2;k++)
{
	if(right[k]==1) {right[k]=0;case2+=arr[k];finish2--;break;}
}
if(i==2-1) break;
count=0;
for(j=n-1;count<2 && j>=0;j--)
{
	if(right[j]==0)
	{
		right[j]=1;finish2++;
		if(count==0)  max=j;
		count++;
	}
}
case2+=arr[max];
if(finish2==n) break;
}
}
time=min(case1,case2);
a++;
finish=finish1;
if(finish==n) break;
}
cout<<"Min time: "<<time;
return 0;
}

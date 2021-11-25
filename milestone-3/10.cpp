include<iostream>
#include<cmath>
using namespace std;


int BinSearch( int arr[],int key,int len)
{
	int h,mid,l;
	l=0;
	h=len-1;
	while(l<=h)
	{
		mid=((l+h)/2);
		if(key==arr[mid])
			return mid;
		else if(key<arr[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
int main()
{
	int key,i,len;
	int arr[] = {1,2,3,6,9,12,15,34,54};
	len=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the key to be searched";
	cin>>key;
	int result= BinSearch(arr,key,len);
	(result == -1)
		? cout<<"Element is not present in the array"<<endl
		: cout<<"Element is present at index : "<<result<<endl;	
	for(i=0;i<len-1;i++)
		cout<<arr[i]<<" ";
    return 0;
}

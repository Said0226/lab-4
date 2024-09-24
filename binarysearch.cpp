#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int target)
{
int low = 0;
int high = size-1;
while (low<=high){
int mid=low+ (high-low) /2;
if(arr[mid]==target)
{
return mid;
}
if(arr[mid] > target)
{
high = mid -1 ;
}
else
{
low = mid +1;
}
}
return -1;
}
int main()
{
int arr[6];
for(int i=0; i<=6; i++)
{
cout <<" enter the value of array"<<"at index"<<i<<"\t" ;
cin>> arr[i] ;}
int size = sizeof(arr)/sizeof(arr[0]) ;
int target;
cout<<"Enter the value to be a search "<<endl;
cin>>target;
int result = binarysearch(arr, size, target) ;
if (result != -1)
{
cout<<" element"<<target<<" found at index"<<result<<endl;
}
else
{
cout<<" element"<<target<<"not found at index"<<result<<endl;
}
}

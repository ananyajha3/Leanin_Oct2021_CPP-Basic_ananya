#include<iostream>
using namespace std;
int main()


{
    int arr[] = {13, 12, 3, 12}; 
    int sum=0;
    for (int i=0; i<5;i++)
   ( sum+=arr[i]);
   
   cout<<"sum is : "<<sum<<endl;
    return 0;
}
 

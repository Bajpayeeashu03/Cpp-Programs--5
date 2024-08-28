#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    int arr[20];
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    cout<<"Enter The Numbers : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    cout<<"The Second largest Number Is: "<<arr[1];
    return 0;
}
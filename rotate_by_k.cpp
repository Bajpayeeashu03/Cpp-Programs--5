#include<iostream>
using namespace std;
void rotatebyk(int arr[],int n,int k)
{
    if(k<0 || k>=n)
        {
            cout<< "Please Change The Value Of K";
        }
    else
    {
        int rot[k];
        int i;
        for(int i=0;i<k;i++)
        {
            rot[i]=arr[i];
        }
        for(int i=k;i<n;i++)
        {
            arr[i-k]=arr[i];
        }
        for(int i=0;i<k;i++)
        {
             arr[n-k+i]=rot[i];
        }
        cout<<"Rotated Array : "<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";

        }
    }
}
int main()
{
    int i,j,n,k;
    int arr[20];
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    cout<<"Enter The Value Of K : ";
    cin>>k;
    cout<<"Enter The Numbers : "<<endl;
    cout<<"Original Array: "<<endl;
    for(i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    rotatebyk(arr,n,k);
    return 0;
}

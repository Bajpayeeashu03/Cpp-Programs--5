#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,j,c=0;
    cout<<"Enter The Numbers :"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
             if(arr[i]==arr[j])
              {
                    c++;
                    break;
              }
        }
    }
    cout<<"Total Number Of Duplicates Is :"<<c;
    return 0;
}
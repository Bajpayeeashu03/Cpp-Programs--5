#include<iostream>
using namespace std;
int main()
{
    int k, i,n,j;
    cout<<"Enter The Number Of Rows :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Enter The Number Of Rows :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
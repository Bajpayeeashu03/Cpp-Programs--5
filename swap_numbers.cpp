#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"Enter The Values Of a and b:"<<endl;
    cin>>a;
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"The New Value of a is : "<<a<<endl;
    cout<<"The New Value of b is : "<<b<<endl;
    return 0;
}
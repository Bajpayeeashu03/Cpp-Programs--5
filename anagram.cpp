#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr1[25],arr2[25];
    int l1,l2,i,j,c=0,p=0;
    cout<<"Enter The First String : ";
    cin>>arr1;
    cout<<"Enter The Second String : ";
    cin>>arr2;
    l1=strlen(arr1);
    l2=strlen(arr2);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            c=0;
            for(j=0;j<l2;j++)
            {
                 if(arr1[i]==arr2[j])
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        cout<<"Strings Are Not Anagram";
        else
        cout<<"Strings Are Anagram";
    }
    else
    cout<<"Size Of Strings Are Not Same";
    return 0;
}


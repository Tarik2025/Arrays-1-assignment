#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<" The elements entered in the array are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    bool flag=false;
    for(int i=0;i<=n-1;i++)
    {
    for(int j=i+1;j<=n-1;j++)
    
    {
        if(a[i]==a[j])
        flag=true;
    }
    }
    if (flag==true)
    cout<<"duplicates are present"<<endl;
    else
    {
    cout<<"there is no duplicates in the array"<<endl;
    }
    return 0;

}
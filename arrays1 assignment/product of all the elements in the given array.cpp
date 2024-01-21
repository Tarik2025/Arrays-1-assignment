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
    int product=1;
    //calculating the product of all elements entered in the array
    for(int i=0;i<n;i++)
    {
        product=product*a[i];
    }
    cout<<"The product of all elements entered in the array is:"<<product;
    return 0;

}
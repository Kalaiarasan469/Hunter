#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class largeNumber
{
    int n,i,j,*ar,s,d=0;
    public:
    largeNumber()
    {
    get();
    sort();
    display();
    }
    void get()
    {
    cin>>n;
    ar=new int[n];
    for(i=0;i<n;i++)
    {
    cin>>ar[i];
    }
    }
    void sort()
    {
    for(i=0;i<n;i++)
    {
    for(j=i;j<n;j++)
    {
    if(ar[i]<ar[j])
    {
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
    }
    }
    }
    for(i=0;i<n;i++)
    { 
    s=pow(10,n-1-i);
    s*=ar[i];
    d+=s;
    }
    }
    void display()
    {
    cout<<d;
    }
};
int main()
{
    largeNumber ln;
return 0;
}

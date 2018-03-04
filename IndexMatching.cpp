#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class IndexMatching
{
    int n,i,j=0,ar[1000],ar2[100];
    public:
    IndexMatching()
    {
    get();
    match();
    display();
    }
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>ar[i];
    }
    }
    void match()
    {
    for(i=0;i<n;i++)
    {
    if(ar[i]==i)
    {
        ar2[j]=i;
        j++;
        }
    }
    }
    void display()
    {
    cout<<"OUTPUT"<<endl;
    for(i=0;i<j;i++)
    {cout<<ar2[i]<<" ";}
    }
};
int main()
{
    IndexMatching im;
return 0;
}

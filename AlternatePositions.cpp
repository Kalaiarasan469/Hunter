#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class AlternatePositions
{
    int n,i,j=0,ar[1000],ar2[100];
    public:
    AlternatePositions()
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
    if(i%2)
    {
    if(ar[i]%2)
    {}
    else
    {
    ar2[j]=ar[i];
    j++;
    }
    }
    else
    {
    if(ar[i]%2)
    {
    ar2[j]=ar[i];
    j++;
    }
    else
    {
    }   
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
    AlternatePositions ap;
return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
class Hunter108
{
    private:
    int i,n=5,j,s=0,c=0,ar[1000];
    public:
    void get()
    {
    cin>>n;
    }
    void sum()
    {
    while(n!=0)
    {
    ar[c]=n%10;
    n=n/10;
    c++;
    }
    for(i=c-1;i>=0;i--)
    {
        if(i!=0)
        {
        s+=pow(ar[i],ar[i-1]);
        }
        else
        {
        s+=pow(ar[i],ar[c-1]);
        }
    }
    cout<<s;
    }
    Hunter108()
    {
    get();
    sum();
    }
};
int main()
{
    Hunter108 h;
    return 0;
}

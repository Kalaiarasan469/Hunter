#include <iostream>
using namespace std;
class Hunter104
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
    for(i=0;i<c/2;i++)
    {
    int t=ar[i];
    ar[i]=ar[c-i-1];
    ar[c-i-1]=t;
    }
    for(i=0;i<c;i++)
    {
    for(j=0;j<=i;j++)
    {
        s+=ar[j];
    }
    }
    cout<<s;
    }
    Hunter104()
    {
    get();
    sum();
    }
};
int main()
{
    Hunter104 h;
    return 0;
}

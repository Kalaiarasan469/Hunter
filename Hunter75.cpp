#include <iostream>
#include <string>
using namespace std;
class Hunter75
{
private:
int n,ar[1000],i;
public:
void get()
{
cin>>n;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
}
void print()
{
for(i=0;i<n;i++)
{
if(i!=n-1)
{
if(ar[i]>ar[i+1])
{cout<<" "<<ar[i+1];}
else
{cout<<"-1";}
}
else
{cout<<"-1";}
}
}
Hunter75()
{
get();
print();
}
};
int main()
{
Hunter75 h;
return 0;
}

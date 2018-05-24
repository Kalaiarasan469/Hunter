#include <iostream>
#include <math.h>
using namespace std;
class Hunter87
{
private:
int i,k,n,ar[1000],cnt=0;
bool fn;
public:
int get()
{
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>ar[i];
if(ar[i]<=k)
{cnt++;}
}
return cnt;
}
Hunter87()
{cout<<get();}
};
int main()
{
Hunter87 h;
return 0;
}

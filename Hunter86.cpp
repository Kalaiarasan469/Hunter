#include <iostream>
#include <math.h>
using namespace std;
class Hunter86
{
private:
int i,j=0,c=0,n,ar[1000],cnt=0,k;
bool fn;
public:
void get()
{
cin>>n;
if(n>100000)
{get();}
}
void count()
{
for(i=1;i<=n;i++)
{
c=0;
k=i;
fn=false;
while(k!=0)
{
ar[c]=k%10;
k=k/10;
c++;
}
for(j=0;j<c;j++)
{
if(ar[j]==2)
{
fn=true;
}
}
if(fn)
{cnt++;}
fn=true;
}
cout<<cnt;
}
Hunter86()
{
get();
count();
}
};
int main()
{
Hunter86 h;
return 0;
}

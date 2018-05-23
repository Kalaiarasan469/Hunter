#include <iostream>
#include <string>
using namespace std;
class Hunter81
{
private:
int cnt,k,n,i,j,c,ar[1000];
bool fn;
public:
void get()
{cin>>n;}
void work()
{
for(i=0;i<=n;i++)
{
c=0;
k=i;
fn=true;
while(k!=0)
{
ar[c]=k%10;
k=k/10;
c++;
}
for(j=0;j<c-1;j++)
{
int t1=ar[j];
int t2=ar[j+1];
int t3=(t1>t2)?t1-t2:t2-t1;
if(t3!=1)
{fn=false;}
}
if(fn)
{cnt++;}
fn=true;
}
cout<<cnt;
}
Hunter81()
{
get();
work();
}
};
int main()
{
Hunter81 h;
return 0;
}

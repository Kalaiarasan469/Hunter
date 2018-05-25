#include <iostream>
using namespace std;
class Hunter10
{
private:
int i,j,a[1000],b[1000],m,n,cn=0;
public:
void get()
{
cin>>m>>n;
for(i=0;i<m;i++)
{cin>>a[i];}
for(i=0;i<n;i++)
{cin>>b[i];}
}
void chck()
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==b[j])
{cn++;break;}
}
}
if(cn==n)
{cout<<"yes";}
else
{cout<<"no";}
}
Hunter10()
{
get();
chck();
}
};
int main()
{
Hunter10 h;
return 0;
}

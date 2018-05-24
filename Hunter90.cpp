#include <iostream>
#include <math.h>
using namespace std;
class Hunter90
{
private:
int i,j=0,c=0,n,ar[1000],cn=0,x,ar2[1000];
string s,t,S;
public:
void get()
{
cin>>s;
if(s.length()>10000000)
{get();}
}
void count()
{
t[c]=s[0];
for(i=0;i<s.length();i++)
{
if(t[c]!=s[i])
{
ar[c]=cn;
c++;
t[c]=s[i];
cn=1;
if(i==s.length()-1)
{
c++;
t[c]=s[i];
ar[c-1]=cn;
}
}
else
{
cn++;
if(i==s.length()-1)
{
c++;
t[c]=s[i];
ar[c-1]=cn;
}
}
}
}
void show()
{
x=0;
for(i=0;i<c;i++)
{ar2[i]=ar[i];}
for(i=0;i<c;i++)
{
if(ar[0]<ar[i+1])
{
x=i+1;
int t=ar[0];
ar[0]=ar[i+1];
ar[i+1]=t;
}
}
cout<<t[x]<<" "<<ar2[x];
}
Hunter90()
{
get();
count();
show();
}
};
int main()
{
Hunter90 h;
return 0;
}

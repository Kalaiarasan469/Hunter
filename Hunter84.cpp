#include <iostream>
#include <math.h>
using namespace std;
class Hunter84
{
private:
int i,j=0,c=0,n,ar[1000],cn=0;
string s,t,S;
public:
void get()
{
cin>>s;
if(s.length()>10000000)
{get();}
}
void encode()
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
for(i=0;i<c;i++)
{
if(ar[i]!=1)
{cout<<ar[i]<<"*"<<t[i];}
else
{cout<<t[i];}
}
}
Hunter84()
{
get();
encode();
show();
}
};
int main()
{
Hunter84 h;
return 0;
}

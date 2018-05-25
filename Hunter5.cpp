#include <iostream>
using namespace std;
class Hunter5
{
private:
int i,n,cn=1;
string s;
public:
void get()
{
cin>>s;
if(s.length()>100000){get();}
}
void chck()
{
for(i=0;i<s.length();i++)
{
switch(s[i])
{
case '1':
{
cn++;
if(s[i+1]=='1'||s[i+1]=='2')
{cn++;}
break;
}
case '2':
{
cn++;
if(s[i+1]<=6)
{cn++;}
break;
}
default:break;
}
}
cout<<cn;
}
Hunter5()
{
get();
chck();
}
};
int main() {
Hunter5 h;
return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
class Hunter83
{
private:
int i,j,ar[1000],c=0;
long int n,m;
public:
void get()
{
cin>>n;
cout<<"\n";
m=n;
while(m)
{
ar[c]=m%10;
m=m/10;
c++;
}
}
void del()
{
for(i=0;i<c-1;i++)
{
if(ar[i]==ar[i+1])
{
for(j=i;j<c-1;j++)
{
ar[j]=ar[j+1];
}
c--;
break;
}
}
for(i=c-1;i>=0;i--)
{
m+=ar[i]*(pow(10,i));
}
cout<<m;
}
Hunter83()
{
get();
del();
}
};
int main()
{
    Hunter83 h;
    return 0;
}

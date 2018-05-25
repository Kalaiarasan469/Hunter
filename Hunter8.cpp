#include <iostream>
using namespace std;
class Hunter8
{
private:
int i,j,k,ar[1000],n;
public:
void get()
{
cin>>n;
for(i=0;i<n;i++)
{cin>>ar[i];}
}
void prnt()
{
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(ar[i]+ar[j]==ar[k])
{
cout<<ar[i]<<" "<<ar[j]<<" "<<ar[k]<<"\n";
}
}
}
}
}
Hunter8()
{
get();
prnt();
}
};
int main() {
Hunter8 h;
return 0;
}

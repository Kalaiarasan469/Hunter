#include <iostream>
#include <string>
using namespace std;
class Hunter76
{
private:
int n,i,j;
double k,s=0;
public:
void get()
{
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>k;
s=s+k;
}
}
cout<<s/(n*n);
}
Hunter76()
{
get();
}
};
int main()
{
Hunter76 h;
return 0;
}

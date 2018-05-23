#include <iostream>
#include <string>
using namespace std;
class Hunter79
{
private:
int n,i,j;double ar[1000];
public:
void get()
{
cin>>n;
for(j=0;j<n;j++)
{
cin>>ar[j];
}
}
void work()
{
for(i=n/2;i<n;i++)
{
double d=((ar[i]+ar[n-i-1])/2);
cout<<"\n"<<d;
}
}
Hunter79()
{
get();
work();
}
};
int main()
{
Hunter79 h;
return 0;
}

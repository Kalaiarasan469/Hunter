#include <iostream>
#include<math.h>
using namespace std;
class Hunter109
{
    private:
    int i,n=5,j,k=0,c=0;
    string s[1000];
    public:
    void get()
    {
    cin>>n;
    for(k=0;k<n;k++)
    {
    cin>>s[k];
    for(i=k-1;(i<c)&&(k!=0);i++)
    {
    int l1=s[i].length();
    int l2=s[i+1].length();
    if(l1>l2)
    {
    string temp=s[i];
    s[i]=s[i+1];
    s[i+1]=temp;
    break;
    }
    if(l1==l2)
    {
    for(j=0;j<l1;j++)
    {
    if(s[i][j]>s[i+1][j])
    {
    string temp=s[i];
    s[i]=s[i+1];
    s[i+1]=temp;
    break;
    }
    }
    }
    c++;
    }
    }
    }
    void show()
    {
    for(i=0;i<n;i++)
    {cout<<"\n"<<s[i];}
    }
    Hunter109()
    {
    get();
    show();
    }
};
int main()
{
    Hunter109 h;
    return 0;
}

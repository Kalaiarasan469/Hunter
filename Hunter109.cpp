#include <iostream>
#include<math.h>
#include <boost/algorithm/string.hpp>  
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
    for(i=0;i<n;i++)
    {
    cin>>s[i];
  boost::algorithm::to_lower(s[i]);
    }
    }
    void sort()
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(i!=j)
    {
    if(s[i].length()<s[j].length())
    {
    string temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    }
    }
    }
    }
    for(i=1;i<n;i++)
    {
    if(s[i].length()==s[i-1].length())
    {
    for(j=0;j<s[i].length();j++)
    {
    if(s[i-1][j]>s[i][j])
    {
    string temp=s[i];
    s[i]=s[i-1];
    s[i-1]=temp;
    break;
    }
    }
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
    sort();
    show();
    }
};
int main()
{
    Hunter109 h;
    return 0;
}

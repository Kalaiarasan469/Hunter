// Example program
#include <iostream>
#include <string>
using namespace std;
class CoPrime
{ 
    int n1,n2,ar[1000],ar2[1000],i,c=0,c2=0,ch=0;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
cin>>n1>>n2;
}
    void chck()
    {
      for(i=1;i<n1;i++)
      {
          if(n1%i==0)
          {
              ar[c]=i;
              c++;
              
              }
          }
          for(i=1;i<n2;i++)
          {
              if(n2%i==0)
              {
                  ar2[c2]=i;
              c2++;
              }
              }
                  for(i=1;i<c;i++)
              {
                  for(int j=1;j<c2;j++)
                  {
                      if(ar[i]==ar2[j])
                      {
                          ch++;
                          }
                      }
                  }
                  if(ch==0)
                  {
                      cout<<"yes"<<endl;
                      }
                      else
                      {
                      cout<<"no"<<endl;
                      }
      }
   };
int main()
{
  CoPrime cp;
  cp.get();
  cout<<"OUTPUT"<<endl;
  cp.chck();
return 0;
}

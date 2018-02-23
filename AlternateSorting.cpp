// Example program
#include <iostream>
#include <string>
using namespace std;
class AlternateSorting
{ 
    int n,ar[1000],i,j,c=0;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(i=0;i<n;i++)
    {cin>>ar[i];
    }
    if(n%2)
    {c++;}
    }
    void sort()
    {
        for(i=0;i<n;i++)
        {
                    for(j=i;j<n;j++)
{
    if(ar[i]<ar[j])
{
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
    }
}
            }
        }
        void disp()
        {
            for(i=0;i<=n/2;i++)
            {
                cout<<"\n"<<ar[i]<<"\t";
                if(c==0)
                {
                    cout<<ar[n-i-1];
                    }
                    else
                    {
                        if(i!=n/2)
                        {
                            
                              cout<<ar[n-i-1];
                  }
                        }
                }
            }
   };
int main()
{
  AlternateSorting as;
  as.get();
  as.sort();
  as.disp();
return 0;
}

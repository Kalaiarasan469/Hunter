// Example program
using namespace std;
#include <iostream>
#include <string>
class NonRepeatedNumbers
{
   int n,i,j,ar[1000],ar2[1000],c=0;
    public:
    void get()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            }
        }
        void find()
        {
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    if(i!=j)
                    {
                        if(ar[i]==ar[j])
                        {
                           ar2[c]=ar[i]; 
                           c++;
                            }
                        }
                    }
                }
            }
                       void disp()
{                         
for(i=0;i<n;i++)
                {int t=0;
                    for(j=0;j<c;j++)
                    {
                        if(ar[i]==ar2[j])
                        {
                            t++;            
                            }
                        }
                    if(t==0)
                            {
                                cout<<ar[i]<<"\t";
                                }
                                }
                }
    };
int main()
{
    NonRepeatedNumbers nrn;
    nrn.get();
    nrn.find(); 
    nrn.disp();
    return 0;
}

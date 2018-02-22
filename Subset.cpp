// Example program
using namespace std;
#include <iostream>
#include <string>
class OneRepeatedNumber
{
   int m,n,i,j,a[1000],b[1000],c=0;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
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
                        if(a[i]==b[j])
                        {
                           c++;
                            }
                        }
                    }
                }
            }
                       void disp()
{                            cout<<"OUTPUT"<<endl;
if(c==0)
{cout<<"No";}else{cout<<"Yes";}
                }
    };
int main()
{
    OneRepeatedNumber orn;
    orn.get();
    orn.find(); 
    orn.disp();
    return 0;
}

// Example program
using namespace std;
#include <iostream>
#include <string>
class OneRepeatedNumber
{
   int n,i,j,ar[1000],ar2[1000],c=0;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
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
{                            cout<<"OUTPUT"<<endl;
if(c==0)
{cout<<"unique";}else{cout<<ar2[0];}
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

// Example program
using namespace std;
#include <iostream>
#include <string>
class RepeatedNumbers
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
            cout<<"OUTPUT"<<endl;
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
                for(i=0;i<c;i++)
                {
                    cout<<" "<<ar2[i];
                    }
                }
    };
int main()
{
    RepeatedNumbers rn;
    rn.get();
    rn.find();
    rn.disp();
    return 0;
}

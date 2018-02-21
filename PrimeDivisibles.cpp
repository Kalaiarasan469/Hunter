// Example program
using namespace std;
#include <iostream>
#include <string>
class PrimeDivisibles
{
   int n,i;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
        cin>>n;
        }
        void find()
        {
            cout<<"OUTPUT"<<endl;
            for(i=2;i<=n;i++)
            {
                int t=0;
                if(n%i==0)
                {t=1;}
                if(t==1)
                {
                    int s=0;
                        for(int j=2;j<i;j++)
                    {
                        if(i%j==0)
                        {s++;}
                        }
                        if(s==0)
                        {
                            cout<<i<<" ";
                            }
                    }
                }
            }
    };
int main()
{
    PrimeDivisibles pd;
    pd.get();
    pd.find();
    return 0;
}

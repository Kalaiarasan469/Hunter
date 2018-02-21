// Example program
using namespace std;
#include <iostream>
#include <string>
class Encoding
{
    string s1;int n,i,t;
    char ar;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
        cin>>s1;
        }
        void encode()
        {
            cout<<"OUTPUT"<<endl;
            n=s1.length();
            for(i=0;i<n;i++)
            {
                t=s1[i];
                if(t>90){
                t+=3;
                if(t>122)
                {
                    ar=t-26;
                    }
                    else{
                        ar=t;
                }
                cout<<ar;
                }
                else
                {
                    t+=3;
                if(t>90)
                {
                    ar=t-26;
                    }
                    else{
                        ar=t;
                        }
                        cout<<ar;}
            }
    }};
int main()
{
    Encoding e;
    e.get();
    e.encode();
    return 0;
}

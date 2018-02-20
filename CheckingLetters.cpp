#include <iostream>
using namespace std;
class CheckingLetters
{
int n1,n2,i=0,j=0,c=0,c2=0,sm;
string s1,s2;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s1>>s2;}
	bool chck()
{
    n1=s1.length();
    n2=s2.length();
    if(n1<n2)
    {
       c=n2-n1;
       sm=n1;
        }
        else
        {
            c=n1-n2;
            sm=n2;
            }
            if(n1==n2){sm=n2;}
        if(c==0||c==1)
        {
            for(i=0;i<sm;i++)
            {
                if(s1[i]!=s2[i])
                {
                    c2++;
                    }
                }
            }
            else
            {
                return false;
                }
                if(c2==1)
                {return true;}
}
};
int main()
{
CheckingLetters cl;
cl.get();
cout<<"OUTPUT"<<endl;
if(cl.chck())
{
    cout<<"yes";}
    else
    {cout<<"no";}
return 0;
}
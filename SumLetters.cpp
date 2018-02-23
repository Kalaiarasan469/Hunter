// Example program
#include <iostream>
#include <string>
using namespace std;
class SumLetters
{ 
    int n,ar[1000],i,c=0;
    string s1;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
    cin>>s1;
    }
    int sum()
    {
        n=s1.length();
        for(i=0;i<n;i++)
        {
            ar[i]=s1[i];
            c+=ar[i];
            }
            return c;
        }
   };
int main()
{
  SumLetters sl;
  sl.get();
  cout<<"INPUT"<<endl<<sl.sum();
return 0;
}

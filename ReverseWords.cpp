// Example program
#include <iostream>
#include <string>
using namespace std;
class ReverseWords
{ 
    int n,ar[1000],i,c=0;
    string s1;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
  getline (cin,s1);
    }
    void rev()
    {
        n=s1.length();
for(i=0;i<n;i++)
        {
       if(s1[i]!=' ')
       {
           c++;
       }
       else{
       break;}
          }
          for(i=c+1;i<n;i++)
          {
              cout<<s1[i];
              }
              cout<<" ";
              for(i=0;i<c;i++)
              {
                  cout<<s1[i];
}
        }
   };
int main()
{
  ReverseWords rw;
  rw.get();
  cout<<"OUTPUT"<<endl;
  rw.rev();
return 0;
}

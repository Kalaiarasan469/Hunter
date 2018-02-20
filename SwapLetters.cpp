// Example program
#include <iostream>
#include <string>
using namespace std;
class SwapLetters
{
    string s1;
    char c;
    int n;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
        cin>>s1;
        }
        string swap()
        {
         n=s1.length();
         for(int i=0;i<n;i++)
         {
             if(i%2)
             {
                 c=s1[i];
                 s1[i]=s1[i-1];
                 s1[i-1]=c;
                 }
             }
             return s1;
            }
            };
int main()
{
  SwapLetters sl;
  sl.get();
  cout<<"OUTPUT"<<endl<<sl.swap();
  return 0;
}

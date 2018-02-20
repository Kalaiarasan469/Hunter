#include <iostream>
using namespace std;
class Number
{
int n1,n2,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n1>>n2;
	if(n1>100000||n2>100000){get();}
	}
int calc()
{
    for(int i=0;i<100000;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            return i;
            }
        }
       }
};
int main()
{
Number n;
n.get();
cout<<"OUTPUT"<<endl<<n.calc();
return 0;
}
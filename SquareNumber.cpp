#include <iostream>
using namespace std;
class Number
{
unsigned int s;int i=0,j=0,sum=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s;
	if(s>10000000000000000000){get();}
	}
int calc()
{
while(s%10)
{
    ar[j]=s%10;
    s=s/10;
    j++;
    }
    for(int i=0;i<j;i++)
    {
        sum=sum+(ar[i]*ar[i]);
        }
       return sum;
       }
};
int main()
{
Number n;
n.get();
cout<<"OUTPUT"<<endl<<n.calc();
return 0;
}
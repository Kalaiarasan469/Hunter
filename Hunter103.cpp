#include <iostream>
using namespace std;
class Hunter103
{
    private:
    int i,n=5,j;
    public:
    void get()
    {
    cin>>n;
    }
    void print()
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<1+2*i;j++)
    {
    cout<<"1";
    }
    cout<<"\n";
    }
    }
    Hunter103()
    {
    get();
    print();
    }
};
int main()
{
    Hunter103 h;
    return 0;
}

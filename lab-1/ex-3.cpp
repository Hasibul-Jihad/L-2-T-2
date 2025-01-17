#include <iostream>
using namespace std;
class myTest
{
private:
    int a,b,c;
public:
    void access_private()
    {
        cin>>a>>b>>c;
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
};
int main()
{
    myTest v;
    cin>>v.a>>v.b>>v.c;
// This will give us an error because we can not access the private data members outside of a class. To access this we must have a public member function.
    v.access_private();//Public function to access private members
}

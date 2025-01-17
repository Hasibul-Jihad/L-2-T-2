#include<iostream>
using namespace std;

void print(int var)
{
    cout<<"integer number "<<var<<endl;
}

void print(float var)
{
    cout<<"float number "<<var<<endl;
}

void print(int var1, float var2)
{
    cout<<"integer number "<<var1<<endl;
    cout<<"float number "<<var2<<endl;
}

void print(float var1, float var2)
{
    cout<<"integer number "<<var1<<endl;
    cout<<"float number "<<var2<<endl;
}

void print(int var1, float var2)//won't run
{
    cout<<"integer number "<<var1<<endl;
    cout<<"float number "<<var2<<endl;
}

int main(){
    int a = 4;
    float b = 3.5;

    print(a);
    print(b);
    print(a,b);
}

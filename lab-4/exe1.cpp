#include<iostream>
using namespace std;

class Input{
    protected :
        int a;
        int b;
    public :
        void num1(int n1){
            a = n1;
        }

        void num2(int n2){
            b = n2;
        }
};

class Sum : public Input {
    public :
        int addSum(){
            return(a+b);
        }
};

int main(void){
    Sum s;
    s.num1(48);
    s.num2(52);
    cout<<"The sum is :"<<s.addSum()<<endl;

    return 0;
}
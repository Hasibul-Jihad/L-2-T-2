#include<iostream>
using namespace std;

class Distance {
    private:
        int meter;
        int value;

        friend int addvalue(Distance);
    
    public:
        Distance(){
            meter = 0;
        }
};

int addvalue(Distance d) {
    cout<<"the value to add : "<<d.value<<endl;
    return d.meter + d.value;
}

int main() {
    Distance D;
    cout<<"Distance : "<<addvalue(D);//input arugment is an object(Distance D). This is the perk of friend function 
    return 0;
}
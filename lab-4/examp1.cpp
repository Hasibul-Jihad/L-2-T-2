#include<iostream>
using namespace std;

class Shape {
    protected :
        int width;
        int height;
    
    public :
    
        void setHeight(int h){
            height = h;
        }

        void setWidth(int w){
            width = w;
        }
};

class Rectangle: public Shape {
    public:
        int getArea(){
            return (width*height);
        }
};

int main(void) {
    Rectangle rect;
    rect.setWidth(12);
    rect.setHeight(14);
    cout<<"the total area is :"<<rect.getArea()<<endl;

    return 0;
}
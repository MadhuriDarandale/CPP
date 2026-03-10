#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Shape{
    public:
   virtual float area()=0;

    virtual~Shape(){

    }
};

class Rectangle: public Shape{
  private:
    float length;
    float width;
 public:
    Rectangle(float l, float w): length(l), width(w){

    }
    float area()override{
        return length*width;
    }
};
class Circle: public Shape{
    private:
    float radius;
    public:
    Circle(float r): radius(r){

    }
    float area()override{
       return 3.14*radius*radius;
    }

};
int main() {
    int type;
    Shape*shape=nullptr;
    if(!(cin>>type)) return 0;
    if(type==1){
        float length,width;
        cin>>length>>width;
        shape= new Rectangle(length,width);
    }else if(type==2){
        float r;
        cin>>r;
        shape=new Circle(r);
         }else{
        return 0;

    }
if(shape){
    cout<<"Area = "<<shape->area()<<endl;

}
 return 0;

}

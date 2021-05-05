#include <cmath>
#include <iostream>

using namespace std;

class Punto
{
private:
    float x;
    float y;
public:  
    Punto(float x_val, float y_val){
        x = x_val;
        y = y_val;
    }
    void Describe(){
        //cout <<"x: "<< x <<endl;
        //cout <<"y: "<< y <<endl;
        cout <<"("<<x<<","<<y<<")"<<endl;        
    }
    void setX( float x_val){
        x=x_val;
    }
    float getX(){return x;}
    void setY(float y_val){
        y=y_val;
    } 
    float getY(){return y;} 
}; 



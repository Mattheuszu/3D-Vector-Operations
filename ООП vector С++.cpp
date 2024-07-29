/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class Vector{
    
    float Xline;
    float Yline;
    float Zline;

    
public:    
    
    void setXline(float Xline)
    {
        this->Xline = Xline;
    }
    
    void setYline(float Yline)
    {
        this->Yline = Yline;
    }
    
    void setZline(float Zline)
    {
        this->Zline = Zline;
    }
    
    float getXline()
    {
        return this->Xline;
    }
    
    float getYline()
    {
        return this->Yline;
    }
    
    float getZline()
    {
        return this->Zline;
    }

    int getDistance(Vector vector)
    {
        return sqrt(this->Xline * vector.getXline() + this->Yline * vector.getYline() + this->Zline * vector.getZline());
    }
    
    float ScalarVector(Vector vector2)
    {
        return (this->Xline * vector2.getXline())+(this->Yline * vector2.getYline())+(this->Zline * vector2.getZline());
    }
    
     float LengthVector()
    {
        return sqrt((this->Xline*this->Xline)+(this->Yline*this->Yline)+(this->Zline*this->Zline));
    }

    void Xlines(Vector vector2)
    {
        cout << this->Xline * vector2.getXline();
        cout << this->Yline * vector2.getYline();
         cout << this->Zline * vector2.getZline();
    }
    
};



int main()
{

Vector vector;

vector.setXline(4);
vector.setYline(2);
vector.setZline(3);

Vector vector2;

vector2.setXline(2);
vector2.setYline(5);
vector2.setZline(1);




cout << vector.ScalarVector(vector2) << endl;
cout << vector.getDistance(vector2);

    return 0;
}


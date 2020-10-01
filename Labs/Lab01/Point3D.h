#include <iostream>
using namespace std;
class Point3D
{
  private:
    static double array[3];
  public:
    //Default constructor
    Point3D()
    {
      for(int i=0; i<3;i++)
      {
        array[i]=0; // to assign zero to each element 
      }
    }
    //sets array to [0,0,0]
    //overload constructor
    Point3D(double x, double y, double z)
    {
      array[0]=x;
      array[1]=y;
      array[2]=z;
    } 
    //sets array to [x, y,z]
    //copy constructor
    Point3D(const Point3D& obj) 
    {
      x=obj.x;
      y=obj.y;
      z=obj.z;
    }    
    //Assignment Operator
    Point3D& Operator= (const Point3D& obj){
      
    }
    //A public empty destructor.
    ~Point3D(){}
    //GetX() with no parameters
    double GetX const(){
      return x;
    }
    //Getz() with no parameters
    double GetZ const(){
      return z;
    }
    //GetY() with no parameters
    double GetY const(){
      return y;
    }
    //SetX
    void SetX(double x){
      array[0]=x;
    }
    //SetY
    void SetY(double y){
      array[1]=y;
    }
    //SetZ
    void SetZ(double z){
      array[2]=z;
    }
    friend ostream& Operator << (ostream& const Point3D& obj){
    }
    string ToString()const{
      stringstream out;
      out<<x.setprecision(2)<<", "<<y.setprecision(2)<<", "<<z.setprecision(2)<<" "<<endl;
      return out.str();
    }
      friend ostream& Operator <<(ostream&  const Point3D& obj){
        cut<<obj.ToString();
        return cut;
      }
};
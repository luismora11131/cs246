#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;
private RightTriangle: public shape{
private:
double a[], b[], c[];
public:
RightTriangle(){
  a[0]=1;
  b[1]=1;
  c[2]=1.414;
}
RightTriangle(double x, double y){
  a[0]=x;
  b[1]=y;
}
RightTriangle(const RightTriangle& obj){
  this->a[0]=obj.a[0];
  this->b[1]=obj.b[1];
}
RightTriangle&operator=(const RightTriangle rhs);

~RightTriangle();
double Perimeter(){
  double result;
  result=a[0]+b[0]+c[0];
  return result;
}
double Area(){
  double areaResult;
  areaResult=(1/2)*(a[0])*(b[0]);
  return areaResult;
}
RighTriangle operator=(const RighTriangle &e)
  {
    this->Side1[0] = e.Side1[0];
    this->Side2[1] = Side2[1];
    return *this;
 }
friend ostream &operator<<(ostream &out, const RighTriangle &obj);
ostream &operator<<(ostream &out, const RighTriangle &obj)
    {
    out<<e.ToString();
    return out;
    }
};


// string ToString() const{
// }
// friend ostream &operator<<

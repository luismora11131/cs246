//Done by Hakeem, Luis, Franceka :3
#include <iostream>
#include <string>
#include "Point3D.h";
using namespace std;
char arr[] = {};//is returned here
int count;
//Bool fuction HasDuplicates
bool HasDuplicates(double arr[], int number){
  for(int i=0;i<number;i++){
    if(arr[i]==arr[i+1]){
      return true;
    }
    else{
      return false;
    }
  }
}
//string function named TrimEnds()
//part A 2
string TrimEnds(string a){
  for(int i=0;i<a.length();i++){
    if(a.at(i)!=' '){
      arr[count]=a.at(i);
      count++;
    }
  }
  for(int i=0;i<count;i++){
    cout<<arr[i];
  }
}
int main(){
}

//Home Assignment



// A private static double array field consisting of 3 elements.

//  A public default constructor that assigns 0 to each element of the field.

//  A public overloaded constructor that takes three double parameters. It assigns the parameters to the respective elements of the field.

//  A public copy constructor.

//  A public assignment operator.

//  A public empty destructor.

//  A public double constant method named GetX() that takes no parameters. It returns the first element of the field.

//  A public double constant method named GetY() that takes no parameters. It returns the second element of the field.

//  A public double constant method named GetZ() that takes no parameters. It returns the third element of the field.

//  A public void method named SetX() that takes a double parameter. It assigns the parameter to the first element of the field.

//  A public void method named SetY() that takes a double parameter. It assigns the parameter to the second element of the field.

//  A public void method named SetZ() that takes a double parameter. It assigns the parameter to the third element of the field.

//  A public string constant method named ToString() that takes no parameters. It returns a string in the format ''(x ,y ,z )'' where x , y, z are the elements of the field representing their respective coordinate. Furthermore,
// they must be contain exactly two decimal points.


//  A friend overloaded ostream operator. It displays the elements of the field in the same format as ToString().
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Array.h"
//problem 1;
int MinimunDistance(Array<int>& data){
  int size=sizeof(data);
  if(size==1||size==0){
    return 0;
  }
  else{
    int min=0, value;
    for(int i=0;i<size;i++){
      value=data[i+1]-data[i];
      if(value<min){
        min=value;
      }
    }
  }
}


//problem 2
template <typename T>
bool Similar(Array<T>& ar1, Array<T>& ar2){
int size1=sizeof(ar1);
int size2=sizeof(ar2);
int a=0,b=0;
while(a<size1&&b<size2){
  if(ar1[a]==ar2[b]){
    return false;
  }
  a++;
  b++;
}
return true;
}


//problem 3
template <typename T>
void MidAppend(Array<T>& data, Array<T>& addon){
  int size1=sizeof(data);
  int size2=sizeof(addon);
  int total=size1+size2;
  T array2[total]=data+addon;
  data=array2;
}


//problem 4
int P(int a[], int low, int high){
  int t;
  int lo=low;
  if(lo>high){
    lo=high;
  }
  int hi=(high+low)-lo;
  int i=lo-1;
  int pivot=a[hi];
  for(int j=lo;j<hi;j+=1){
    if(a[j]<pivot){
      i+=1;
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
  }
  t=a[i+1];
  a[i+1]=a[hi];
  a[hi]=t;
  return (i+1);
}
/*
|a|low|high|lo|lo>high|hi           |i       |pivot           |j |a[j]<pivot|t         |
=======================================
| |   |low |low|y     |(high+low)-lo| lo-1   | value of a[hi] |lo| true     |          |
| |   |    |   |      |             |(lo-1)+1|              0 |  |          |   a[i]   |


I think the worst case scenario would be if the values for the array are empty (arr[]={0,0,0,0,0,0}).

*/
int main()
{

	return 0;
}

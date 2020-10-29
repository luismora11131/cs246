#include <iostream>
#include <string>
#include "Node.h"
#include "Array.h"
#include "Vector.h"
#include "Stack.h"
using namespace std;
//Problem 1
bool IsMVCSudoku(ds::Vector<int>& bd, int number){
char newarray[9][9]={};
int run=0;
int row=9,col=9;
//this will create a new array of 2 dimensions so its easier to read
	//The reason I did this is because the I think the array that is passed through the function is 1D and it would be easier for me to make it 2D by didving its segments into a 9 by 9 grid;
  for(int i=0;i<row;i++){
    for(int a=0;a<col;a++){
      newarray[i][a]=bd[run];
      run++;
    }
  }
  //will check if its a valid solution as it goes though the array
  for(int i=0;i<row;i++){
    for(int a=0;a<col;a++){
        if(newarray[a][col]==number){
          return false;
        }
      }
      //checks for rows
    if(newarray[row][i]==number){
      return false;
    }
  }
return true;
}

//Problem 2
template<typename T>
void SelectionSort(ds::sn::Node<T>* root){
  ds::sn::Node<T>* temp=root;
  //This will traverse through the list
  while(temp){
    ds::sn::Node<T>* min=temp;
    ds::sn::Node<T>* next=temp->next;
    //Traverse trough the unsorted sublist
    while(next){
      if(min-data>next->data){
        min=next;
      }
      next=next->next;
    }
    //Here we will proceed on the swap of data
    int i=temp->data;
    temp->data=min->data;
    min->data=i;
    temp=temp->next;
  }
}

//Problem 3
std::string AdjacentDuplicateRemoval(std::string str){
  int i;
  string res;
  
  while(str[i]){
    //It checks if the first character is the same as the second one;
    if(str[i]!=str[i+1]){
      //then it will stored the characters that have not been repeated
      res+=str[i];
      i++;
    }
    //if the the next character is not equal to Null(the end of the string) then it will go through the string
    if(str[i+1]&&str[i]==str[i+1]){
      while(str[i+1]&&str[i]==str[i+1]){
        i++;
      }
    i++;
    }
  }
  cout<<res;
}



//Problem 4
template <typename T>
int NthOccurance(ds::Array<T>& data, const T& value, int n){
//I do not understand the wording of the question 
}








int main()
{
	return 0;
}

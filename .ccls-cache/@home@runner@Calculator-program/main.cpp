#include <iostream>
using namespace std;

int main() {
  float x = 0;
  float y = 0;
  float sum = 0;
  string user;

  cout<< "Enter your first integer: ";
  cin>> x;
  cout<< "Enter your second integer: ";
  cin>> y;
  cout<< "Would you like to add, subtract, multiply, or divide?: ";
  cin>> user;
  
  if(user == "add"){
      sum = x+y;
      cout<< x << " + " << y << " = " <<sum<<endl;

  }
  
  if(user == "subtract"){
    sum = x-y;
    cout<< x << " - " << y << " = " <<sum<<endl;
  }

  if(user == "multiply"){
    sum = x*y;
    cout<< x << " * " << y << " = " <<sum<<endl;
  }

  if(user == "divide"){
    sum = x/y;
    cout<< x << " / " << y << " = " <<sum<<endl;
    
    }
    
  else if(user != "add" && user != "subtract" && user != "multiply" && user != "divide"){
    cout<< "try again.";
  }


    

  
}
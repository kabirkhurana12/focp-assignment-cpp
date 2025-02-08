#include <iostream>
using namespace std;
int main(){
int num;
  cout<<"kindly enter the num:- ";
  cin>>num;
  for (int i=2;i<num;i++){
     if (num%i==0){
      cout<<"it is not a  prime num"<<endl;
      return 0;
  }
 }
cout<< "it is a prime num";       

  return 0;
}




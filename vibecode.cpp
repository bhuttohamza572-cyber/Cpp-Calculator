#include<iostream>
using namespace std;

int main(){
   double num1,num2,choice;
   cout<<"Select the operation you want to perform : \n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division"<<endl;
   cout<<"Choice : ";
   cin>>choice;
   cout<<"Enter the numbers : ";
   cin>>num1>>num2;

   if(choice==1){
      cout<<"Result : " <<num1+num2;
   }
   else if(choice==2){
      cout<<"Result : " << num1-num2;
   }
   else if(choice==3){
      cout<<"Result : " << num1*num2;
   }
   else if(choice==4 && num2==0){
      cout<<"Error! Number cannot be divided by zero ";
   }
   else if(choice==4){
      cout<<"Result : " << num1/num2;
   }
   else 
      cout<<"Invalid choice."<<endl;




}

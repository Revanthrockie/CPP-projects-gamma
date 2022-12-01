#include <iostream>
#include <cmath> // Used for various math equations like 'sqroot'
using namespace std; // Dont have to use std:: type for writing code.

// function for Addition

void add(){
  int n,sum = 0,i, num;
  cout << "Enter how many numbers you want to enter: "<<endl;
  cin>>n;
  cout<<"Please enter the number one by one: \n";
  for (size_t i = 1; i <= n; i++)
  {
    cin >> num;
    sum = sum+num;
  }
  cout << "\n Sum of the numbers =  "<<sum << endl;
}

// fucntion for Subtraction

void sub(){
  int num1,num2,diff;
  cout<< "\n enter the first number= ";
  cin>> num1;
  cout<< "\n enter the second number= ";
  cin>>num2;

  diff = num1 - num2;
  cout<<"\n Difference of the number is: "<< diff<< endl;
}

// function for Division

void div(){
  int num1,num2,rem=0,z;
  float devis;
  cout<< "\n enter the first number: ";
  cin>>num1;
  cout<< "\n enter the second number: ";
  cin >> num2;
  while(num2 == 0){
    cout<<"\n the divisor cannot be 0.. Please enter the divisor once again: ";
    cin >> num2;
  }
  devis = num1/num2;
  cout << "the devision is: "<< rem << endl;

  // to find the Remainder of the divison

  cout<<"Do you want the remainder too?.... enter (1) for yes OR enter (0) for no";
  cin>> z;
   if (z == 1) {
    rem = num1 % num2;
    cout<<"the remainder is: "<< rem;
   } else {
     cout << "thank you!!" << endl;
   }
}

// Function for Multiplication

void mul(){
  int n, prod = 1,i,number;
  cout<<"enter how many numbers you want to enter: \n";
  cin>>n;

  cout<<"enter the number one by one: \n";

  for (i= 1;  i<= n ; i++)
  {
    cin >> number;
    prod = prod * number;
  }
  cout<< "The product is:  " << prod << endl;

}

// Function for finding Squareroot

void sqroot()
{  int num1;
   float sqr;

   cout<<"\n Enter the number to find the square root of: ";
   cin>>num1;

   cout << "\n the Square root is: "<< sqrt(num1)<< endl;
 }

// Function for finding percentage

void percentage()
{
  int option;

  cout << "1.Do you want to find the percentage of a particular number \n"
  <<" or\n "
  << "2.Find percentage of two numbers when divided: \n"
  << "To choose type the option you want to choose: \n";
  cin>> option;

  switch(option)
  {
    case 1:
      int result00, number00 , percentagevalue;

      cout << "Enter the number you want to find the percentage of: \n";
      cin >> number00;

      cout<< "Enter the percentage value: ";
      cin>> percentagevalue;

      result00 = (number00 * percentagevalue) / 100;

      cout<< "The " << percentagevalue << "%\n" << "of " << number00
      << "is" << ": "
      << result00;
    break;

    case 2:
      float num1, num2;
      int result01;

      cout << "Enter the number 1: ";
      cin >> num1;

      cout << "Enter the number 2: ";
      cin >> num2;

      result01 =  (num1 / num2) * 100;

      cout << "percentage value is: " << result01 << "%\n";
    break;

    case 3:
      exit(0);
    break;
  }




}
int main(){
  int opr;

// Calculator
  do{
      cout<< "Select one option from below\n"
      << "1.Addition\n"
      << "2.Subtraction\n"
      << "3.Multiplication\n"
      << "4.Division,Modulous\n"
      << "5.Squareroot\n"
      << "6.Percentage\n"
      << "7.Exit\n"
      << "\n\n Select from one option: "
      <<endl;
      cin >> opr;

     switch(opr){
      // operation needed to be used
      case 1:
        add(); // func for Addition
      break;

      case 2:
        sub(); // func for Subtraction
      break;

      case 3:
        mul(); // func for Multiplication
      break;

      case 4:
        div(); //  func for Division
      break;

      case 5:
        sqroot(); // func for Squareroot
      break;

      case 6:
        percentage(); // func for percentage
      break;

      case 7:
        exit(0);
      break;

      default:
       cout<<"You chose out of context\n\n";
      break;
    }

 }while( opr != 7);



  return 0;


};

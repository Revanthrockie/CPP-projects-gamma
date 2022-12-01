// master card starts with 50, 51, 52, 53, 54, 55, 56 and contains - 15 digits.
// visa card starts with 4 and contains -13 or 15 digits.
// American Express starts with eihter 43 or 37 and contains - 15 digits.

// Use luhn algorithm for this projects.
--------------------------------------------------------------------------------
#include <iostream>
using namespace std;
#include <string>

// main file

int main()
{
  long check_card;
  int sum = 0 , count = 0;
  char result[] = 18;

  do{
    cout << "Please enter your card number: \n";
    cin >> check_card;
  }while ( check_card <= 0);

  // step 1:

  long work_card = check_card;
  int o_sum = 0 , divisor = 10;;

  while (work_card > 0)
  {
    int LastDigit = work_card % 10;
    o_sum += LastDigit;
    sum = sum + o_sum;

    work_card = work_card/100;

  }

  // step 2:

  while (work_card > 0)
  {
    int LasteDigit = (work_card / 10) % 10;
    int timestwo = LasteDigit * 2;
    int e_sum = (LasteDigit / 10) + (LasteDigit % 10);
    sum = sum + e_sum;

    }

    work_card = check_card;
    while (work_card != 0)
    {
      work_card = work_card / 10;
      count++;

    }

  // Code to check what kind of card it is (1)
 for (int i = 0; i < count - 2; i++)
 {
   divisor = divisor*10;
 }

 // To check what kind of card it is (2)

 int FirstDigitnum = check_card / divisor;
 int SecondDigitnum = check_card / ( divisor / 10);

 if( sum % 10 == 0 ){
   if( FirstDigitnum == 4 && (count == 13 || count == 16))
   {
     strcpy(result , "VISA");
   }else if( (SecondDigitnum == 34 || SecondDigitnum == 37) && count == 15)
    {
     strcpy(result , "A.EXP");
   }else if( (50 < SecondDigitnum || SecondDigitnum < 56 )  || count == 15 )
   {
     strcpy(result , "MASTERCARD");
   }else
   {
     strcpy(result , "INVALID CARD");

   }
 }

};

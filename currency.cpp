#include <iostream>
using namespace std;
int main()
{

float dollar;
float bp = (1/1.487);
float frnc = (1/0.172);
float yaun = (1/0.095);
float ind = (1/0.013);
float yen = (1/0.00955);

cout<<" enter the Dollars for Conversion: \n";
cin>> dollar;

int choice;// choices

do {
  /* code */
  cout << "1. Indian rupees: \n";
  cout << "2. British Pounds: \n";
  cout << "3. French franc: \n";
  cout << "4. Chinese yuans: \n";
  cout << "5. Japanese yen: \n";
  cout << "6. Exit \n";
  cout << "Select any one option from above: \n";
  cin >> choice; //select number 1,2,....n

switch(choice) // les user have the power to choose!!
{
  case 1:
    cout<<"Dollars to IND:  "<<ind*dollar;
  break;

  case 2:
    cout<< "Dollars to POUNDS:  "<< bp*dollar;
  break;

  case 3:
    cout<< "Dollars to Frances:  "<< frnc*dollar;
  break;

  case 4:
    cout<< "Dollarsto Chinese:  " <<yaun*dollar;
  break;

  case 5:
    cout<< "Dollars to Japanese:  " << yen*dollar;
  break;

  case 6:
    exit(0);
  break;
}
}
while(choice != 6);

return 0;




};

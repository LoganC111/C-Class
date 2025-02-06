#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  const float distributor_fee = 0.80;
  int adulttixsold, childtixsold;
  float adultticket = 10.00;
  float childticket = 6.00;
  float grossprofit;
  string moviename;
  
  cout << "Input the name of movie:" << endl;
  cin >> moviename;
  cout << "How many child tickets sold:" << endl;
  cin >> childtixsold;
  cout << "How many adult tickets sold" << endl;
  cin >> adulttixsold;
  
  grossprofit = (childtixsold * childticket) + (adulttixsold * adultticket);
  
  cout << "gross profit is:" << grossprofit << endl;
  
  float distfee = grossprofit * distributor_fee;
  float netprofit = grossprofit - distfee;
  cout << "net profit for the night is:" << netprofit << endl;
  
   return 0;
}
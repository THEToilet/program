#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int X;
  cin >> X;
  long int fivehund;
  long int five;
  fivehund = X/500;
  //cout << fivehund << endl;
  five = (X-fivehund*500)/5;
//  cout << five << endl;
  cout << fivehund*1000 + five*5 << endl;

}
//#include <bits/stdc++.h>
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long int N;
  cin >> N;
  long int sum = 0;
  rep(i, N)
  {
    if (((i + 1) % 3 == 0) && ((i + 1) % 5 == 0))
    {
    }
    else if((i+1) % 3 == 0){

    }
    else if((i+1) % 5 == 0){
    }
    else{
      sum += i + 1;
    }
     // cout << i + 1 << endl;
  }
  cout << sum << endl;
}
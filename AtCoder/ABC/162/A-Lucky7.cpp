#include <iostream>
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
int main()
{
  string N;
  cin >> N;
  rep(i,3){
    if(N.at(i) == '7'){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359

int main()
{
  int a,b;
  char ope;
  cin >> a >> ope >> b;
  while (ope != '?')
  {
    switch(ope){
      case('+'):
        cout << a+b << endl;
        break;
      case('-'):
        cout << a-b << endl;
        break;
      case('*'):
        cout << a*b << endl;
        break;
      case('/'):
        cout << a/b << endl;
        break;
    }
    cin >> a >> ope >> b;
  }

}
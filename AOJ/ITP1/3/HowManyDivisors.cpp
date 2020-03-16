#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, count;
  cin >> a >> b >> c;
  for (; a <= b; a++)
  {
    if(c%a==0){
      count++;
    }
  }
  cout << count << endl;
}
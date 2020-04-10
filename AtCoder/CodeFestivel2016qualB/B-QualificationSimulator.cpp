#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int num = A + B;
  int count = 0;
  int forgni = 1;
  rep(i, N)
  {
    char c;
    cin >> c;
    if (c == 'a')
    {
      if (count < A + B)
      {
        cout << "Yes" << endl;
        count++;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else if (c == 'b')
    {
      if (count < A + B)
      {
        if (forgni <= B)
        {
          cout << "Yes" << endl;
          forgni++;
          count++;
        }
        else
        {
          cout << "No" << endl;
        }
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else if (c == 'c')
    {
      cout << "No" << endl;
    }
  }
}
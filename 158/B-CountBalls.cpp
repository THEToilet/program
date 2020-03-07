#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Fault
  long long int N, A, B;
  int point = 0;
  string s = "";
  cin >> N >> A >> B;
  if (A == 0)
  {
    cout << 0 << "\n";
    return 0;
  }
  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < A; j++)
    {
      s += "b";
    }
    for (int k = 0; k < B; k++)
    {
      s += "r";
    }
  }
  if (N < 100)
  {
    for (int i = 0; i < N; i++)

    {
      if (s.at(i) == 'b')
      {
        point++;
      }
    }
  }
  else
  {
    for (int i = 0; i < 100; i++)
    {
      if (s.at(i) == 'b')
      {
        point++;
      }
    }
  }
  if (N / 100 > 1)
  {
    int a = N%100;
    //cout << a << endl;
    point = point * (N/100);
    for (int i = 0; i < a; i++)
    {
      if (s.at(i) == 'b')
      {
        point++;
      }
    }
    cout << point << "\n";


  }
  else
  {
    cout << point << "\n";
  }
}
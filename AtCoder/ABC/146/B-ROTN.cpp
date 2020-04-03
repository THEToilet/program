#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  string S;
  cin >> N >> S;
  N = N % 26;
  for (int i = 0; i < S.size(); i++)
  {
    char c = S.at(i) + N;
    if (c > 90)
    {
      c = c - 26;
    }
    cout << c;
  }
  cout << endl;
}
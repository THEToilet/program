#include <bits/stdc++.h>
using namespace std;

int main()
{
  int S[13], H[13], C[13], D[13];
  int n;
  char a;
  int num;
  for (int i = 0; i < 13; i++)
  {
    S[i] = -1;
    H[i] = -1;
    C[i] = -1;
    D[i] = -1;
  }
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> num;
    switch (a)
    {
    case ('S'):
      S[num - 1] = 1;
      break;
    case ('H'):
      H[num - 1] = 1;
      break;
    case ('C'):
      C[num - 1] = 1;
      break;
    case ('D'):
      D[num - 1] = 1;
      break;
    }
  }

  for (int i = 0; i < 13; i++)
  {
    if (S[i] == -1)
    {
      cout << "S" << " " <<  i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++)
  {
    if (H[i] == -1)
    {
      cout << "H" << " " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++)
  {
    if (C[i] == -1)
    {
      cout << "C" << " " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++)
  {
    if (D[i] == -1)
    {
      cout << "D" << " " << i + 1 << endl;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int S;
  cin >> S;
  int L = S / 100;
  int R = S % 100;
  if (1 <= L && L <= 12)
  {
    if (1 <= R && R <= 12)
      printf("AMBIGUOUS\n");
    else
      printf("MMYY\n");
  }
  else
  {
    if (1 <= R && R <= 12)
      printf("YYMM\n");
    else
      printf("NA\n");
  }
}
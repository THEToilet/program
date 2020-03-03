#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i < n + 1; i++)
  {
    if ((i / 10) % 10 == 3)
    {
      printf(" %d", i);
    }
    else if(i % 10 == 3){
      printf(" %d", i);
    }
    else if ((i / 10) % 10 == 3)
    {
      printf(" %d", i);
    }
    else if ((i / 100) % 10 == 3)
    {
      printf(" %d", i);
    }
    else if ((i / 1000) % 10 == 3)
    {
      printf(" %d", i);
    }
    else if (i % 3 == 0)
    {
      printf(" %d", i);
    }
  }
  printf("\n");
}
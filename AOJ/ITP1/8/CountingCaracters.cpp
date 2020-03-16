#include <bits/stdc++.h>
using namespace std;
int main()
{
  char ch = ' ';
  string sums = "";
  int alpha[26];
  for (int i = 0; i < 26; i++)
  {
    alpha[i] = 0;
  }
  while (scanf("%c", &ch) != EOF)
  {
    sums += ch;
  }
  for (int i = 0; i < sums.size(); i++)
  {
    if (sums.at(i) >= 65 && sums.at(i) <= 90)
    {
      alpha[sums.at(i) - 65]++;
    }
    else if (sums.at(i) >= 97 && sums.at(i) <= 122)
    {
      alpha[sums.at(i) - 97]++;
    }
  }
  for (int i = 0; i < 26; i++)
  {
    char c = i + 97;
    cout << c << " "
         << ":"
         << " " << alpha[i] << "\n";
  }
}
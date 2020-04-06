#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s[4];
  cin >> s;
  printf((s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) ? "Bad\n" : "Good\n");
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long int a, b, c;
  cin >> a >> b >> c;
  ((sqrt(a)*1000000 + sqrt(b)*1000000) - sqrt(c)*1000000 < 0) ? cout << "Yes" << endl : cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
 // cout << (int)a / (int)b << " " << (int)a % (int)b << " " << endl;
  printf("%d ", a/b);
  printf("%d ", a%b);
  printf("%.8lf\n", (double)a / (double)b);
}
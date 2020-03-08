#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int average = 0;
  double d = 0;
  int s[1000];
  cin >> n;
  while (n != 0)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> s[i];
      average += s[i];
    }
    average = average / n;
  //  cout << average << endl;
    
    for (int i = 0; i < n; i++)
    {
      d += pow((s[i] - average),2);
     // cout << d << endl;
    }
    d = d/n;
    printf("%.8lf\n", sqrt(d));
    cin >> n;
    average = 0;
  }
}
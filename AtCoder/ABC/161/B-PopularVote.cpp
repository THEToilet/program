#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, M;
  vector<int> A;
  int sum = 0;
  int point = 0;
  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    sum += a;
    A.push_back(a);
  }
  double mm = sum / (4.0 * M);
  for (int i = 0; i < N; i++)
  {
    if (A.at(i) >= mm)
    {
      point++;
    }
  }
  //cout << mm << endl;
  //cout << point << endl;
  if (point >= M)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
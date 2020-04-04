#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A;
  vector<int> B;
  vector<int> C;

  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
    A.at(i)--;
//    cout << A.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    B.push_back(a);
  }
  for (int i = 0; i < N - 1; i++)
  {
    int a;
    cin >> a;
    C.push_back(a);
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans += B.at(A.at(i));
    if (i > 0 && A.at(i) == A.at(i - 1) + 1)
    {
      ans += C.at(A.at(i - 1));
    }
  }
  cout << ans << endl;
}
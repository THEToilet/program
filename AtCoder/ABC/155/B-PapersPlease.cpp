#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  vector<int> A;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }
  for (int i = 0; i < A.size(); i++)
  {
    if (A.at(i) % 2 == 0)
    {
      if (A.at(i) % 3 != 0 && A.at(i) % 5 != 0)
      {
        cout << "DENIED" << endl;
        return 0;
      }
    }
  }
  cout << "APPROVED" << endl;
}
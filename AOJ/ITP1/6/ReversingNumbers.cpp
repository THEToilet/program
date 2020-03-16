#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n, a;
  stack<int> q;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    q.push(a);
  }

  while (!q.empty())
  {
    if (q.size() == 1)
    {
      cout << q.top();
    }
    else
    {
      cout << q.top() << " "; // 先頭の値を出力
    }
    q.pop(); // 先頭の値を削除
  }
  cout << endl;
}
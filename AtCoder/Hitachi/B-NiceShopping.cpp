#include <bits/stdc++.h>
using namespace std;
// Fault
int main()
{
  int A, B, M;
  int X, Y, C;
  int t;
  int min = 0;
  int tmp;
  deque<int> a;
  deque<int> b;
  deque<int> x;
  deque<int> y;
  deque<int> c;
  cin >> A >> B >> M;
  for (int i = 0; i < A; i++)
  {
    cin >> t;
    a.push_front(t);
  }
  for (int i = 0; i < B; i++)
  {
    cin >> t;
    b.push_front(t);
  }
  for (int j = 0; j < M; j++)
  {
    cin >> X;
    cin >> Y;
    cin >> C;
    x.push_front(X);
    y.push_front(Y);
    c.push_front(C);
  }
  for (int i = 0; i < M; i++)
  {
    tmp = a.at(x.at(i)) + b.at(y.at(i)) - c.at(i);
    if(i==0){
      min = tmp;
    }
    cout << tmp << endl;
    if (tmp < min)
    {
      min = tmp;
    }
  }
  cout << min << endl;
}
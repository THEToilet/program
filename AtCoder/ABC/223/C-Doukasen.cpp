#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<double> A(N), B(N);
  vector<double> C(N);
  double sum = 0;
  rep(i, N)
  {
    cin >> A.at(i) >> B.at(i);
    C.at(i) = A.at(i) / B.at(i);
    sum += C.at(i);
  }

  printf("sum : %lf", sum);
  vector<double> s(N + 1, 0);
  rep(i, N)
  {
    s.at(i + 1) = s.at(i) + C.at(i);
  }

  rep(i, N + 1)
  {
    cout << s.at(i) << endl;
    printf("%lf", s.at(i));
  }
  return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long long int N;
  long long int A, B;
  cin >> N >> A >> B;
  long long int a = N / (A + B);
  long long int b = N % (A + B);
  cout << a * A + min(A, b) << endl;
}
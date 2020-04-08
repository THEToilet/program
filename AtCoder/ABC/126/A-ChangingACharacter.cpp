#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K;
  char S[100];
  cin >> N >> K >> S;
  S[K - 1] = S[K - 1] + 32;
  cout << S << endl;
}
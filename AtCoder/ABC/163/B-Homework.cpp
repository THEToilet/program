#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  long sum = 0;
  rep(i, M)
  {
    cin >> A[i];
    sum += A[i];
  }
  if(sum > N){
    cout << -1 << endl;
    return 0;
  }
  else{
    cout << N-sum << endl;
    return 0;
  }
}
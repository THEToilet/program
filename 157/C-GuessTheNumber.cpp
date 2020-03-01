#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M, s[5], c[5], Ans[3];
  bool result = true;
  for (int i = 0; i < 3; i++)
  {
    Ans[1] = -1;
  }
  cin >> N >> M;
  for (int i = 0; i < M; i++)
  {
    cin >> s[i] >> c[i];
  }
  for (int i = 0; i < M; i++)
  {
    if (Ans[s[i]] != -1)
    {
      Ans[s[i]] = c[i];
    }
    else
    {
      result = false;
    }
  }

  if (result)
  {
    for(int i=0;i<N;i++){
      if(Ans[i] == -1){
      Ans[i] = 0;
      }
    }
    for(int i=0;i<N;i++){
      cout << Ans[i];
    }
  }
  else
  {
    cout << -1 << endl;
  }
}
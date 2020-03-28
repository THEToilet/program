#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int K;
  long int N;
  long int sum = 0;
  cin >> K >> N;
  vector<int> A;
  vector<int> neo;

  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < N; i++)
  {
    long int temp = A.at(i);
    if(i==0){
      neo.push_back(A.at(i) + K - A.at(N-1));
      neo.push_back(A.at(i+1)-A.at(i));
    }
    if(i==N-1){
      break;
    }
    neo.push_back(A.at(i+1)-A.at(i));
  }
  //sort(neo.begin(), neo.end());

  for(int i=0;i<N;i++){
    cout << neo.at(i) << endl;
  }
  for(int i=0;i<N-1;i++){
    sum += neo.at(i);
  }
  cout << sum << endl;
}
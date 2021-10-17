#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
  if (a.second != b.second)
  {
    return a.second < b.second;
  }
  else
  {
    return a.first < b.first;
  }
}

int main()

{
  int N, M;
  cin >> N >> M;
  int nn = 2 * N;
  vector<pair<int, int>> score(nn);
  rep(i, nn)
  {
    score.at(i).first = i + 1;
    score.at(i).second = 0;
  }
  vector<vector<char>> a(nn, vector<char>(M));
  rep(i, nn)
  {
    rep(j, M)
    {
      cin >> a.at(i).at(j);
    }
  }

  // round
  rep(i, M)
  {
    // match
    rep(k, N)
    {
      int l = score.at(2 * k).first - 1;
      int r = score.at(2 * k + 1).first - 1;
      pair<int, int> ll = score.at(2 * k);
      pair<int, int> rr = score.at(2 * k + 1);
      /*
      cout << l << " " << r << endl;
      cout << a.at(l).at(i) << " " << a.at(r).at(i) << endl;
      */
      (a.at(l).at(i) == 'G' && a.at(r).at(i) == 'C') ? ll.second++ : rr.second;
      (a.at(l).at(i) == 'C' && a.at(r).at(i) == 'P') ? ll.second++ : rr.second;
      (a.at(l).at(i) == 'P' && a.at(r).at(i) == 'G') ? ll.second++ : rr.second;
      (a.at(l).at(i) == 'G' && a.at(r).at(i) == 'P') ? rr.second++ : ll.second;
      (a.at(l).at(i) == 'C' && a.at(r).at(i) == 'G') ? rr.second++ : ll.second;
      (a.at(l).at(i) == 'P' && a.at(r).at(i) == 'C') ? rr.second++ : ll.second;
      /*
      cout << ll.first << ":" << ll.second << " " << rr.first << ":" << rr.second << endl;
      cout << "                  " << endl;
      */
    }
    sort(score.begin(), score.end(), compare_by_b);
  }

  for (int i = 0; i < score.size(); i++)
  {
    cout << score.at(i).first << ' ' << score.at(i).second << endl;
  }
  return 0;
}

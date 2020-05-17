#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  map<int, int> m;
  // 頂点数と辺数
  int N, M;
  cin >> N >> M;

  // グラフ入力受取 (ここでは無向グラフを想定)
  Graph G(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    if (m[a] == 0)
    {
      m[a] = b;
    }
    else
    {
      m[a] = max(m[a], b);
    }
    if (m[b] == 0)
    {
      m[b] = a;
    }
    else
    {
      m[b] = max(m[b], a);
    }
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // BFS のためのデータ構造
  vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty())
  {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (int nv : G[v])
    {
      if (dist[nv] != -1)
        continue; // すでに発見済みの頂点は探索しない

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      //  m[nv + 1] = dist[v] + 1;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  bool ok = false;
  // 結果出力 (各頂点の頂点 0 からの距離を見る)
  for (int v = 1; v < N; ++v)
  {
    // cout << v << ": " << dist[v] << endl;
    if (dist[v] > 0)
    {
      ok = true;
    }
  }
  if (ok)
  {
    cout << "Yes" << endl;
    for (int i = 2; i <= N; i++)
    {
      cout << m[i] << endl;
    }
    /*for (int v = 1; v < N; ++v)
    {
      cout << dist[v] << endl;
    }*/
  }
  else
  {
    cout << "No" << endl;
  }
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
void selectionSort(vector<int> A, int N)
{
  int times = 0;
  rep(i, N)
  {
    int minj = i;
    for (int j = minj; j < N; j++)
    {
      if (A[j] < A[minj])
      {
        minj = j;
      }
    }
    if (i != minj)
      times++;
    swap(A[i], A[minj]);
  }
}

void bubbleSort(vector<int> A, int N)
{
  int flag = 1;
  int times = 0;
  while (flag)
  {
    flag = 0;
    int j = 0;
    for (int i = N - 1; i >= j + 1; i--)
    {
      if (A[i] < A[i - 1])
      {
        swap(A[i], A[i - 1]);
        flag = 1;
        times++;
      }
    }
    j++;
  }
}

void show(vector<int> A, int N)
{
  rep(i, N)
  {
    if (i == N - 1)
    {
      cout << A[i] << endl;
    }
    else
    {
      cout << A[i] << " ";
    }
  }
}

bool isStable(vector<int> in, vector<int> out, int N)
{
  rep(i, N)
  {
    for (int j = i + 1; j < N; j++)
    {
      rep(a, N)
      {
        for (int b = a + 1; b < N; b++)
        {

          if (
              in[i] == in[j] && in[i] == out[b] && in[j] == out[a])
          {

            return false;
          }
        }
      }
    }
    return true;
  }
}

int main()
{
  int N;
  cin >> N;

  return 0;
}
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

bool isTrue(vector<int> v)
{
  int SIX = v.at(0) * 100 + v.at(1) * 10 + v.at(2);
  int SEVEN = v.at(0) * 10000 + v.at(3) * 1000 + v.at(4) * 100 + v.at(3) * 10 + v.at(5);
  int TWENTY = v.at(6) * 100000 + v.at(7) * 10000 + v.at(3) * 1000 + v.at(5) * 100 + v.at(6) * 10 + v.at(8);
  return SIX + SEVEN + SEVEN == TWENTY;
}
int main()
{
  vector<int> num(10);

  rep(i, num.size())
  {

    num[i] = i;
  }
  do
  {
    if (isTrue(num))
    {
      cout << "SIX : ";
      cout << num.at(0) * 100 + num.at(1) * 10 + num.at(2) << endl;
      cout << "SEVEN : ";
      cout << num.at(0) * 10000 + num.at(3) * 1000 + num.at(4) * 100 + num.at(3) * 10 + num.at(5) << endl;
      cout << "TWENTY : ";
      cout << num.at(6) * 100000 + num.at(7) * 10000 + num.at(3) * 1000 + num.at(5) * 100 + num.at(6) * 10 + num.at(8) << endl;
    }
  } while (next_permutation(num.begin(), num.end()));
  return 0;
}

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int H, W;
  string odd = "";
  string even = "";
  cin >> H >> W;
  while (H != 0 && W != 0)
  {
    for (int i = 0; i < W; i++)
    {
      if(i%2==0){
        odd += "#";
      }
      if(i%2==1){
        odd += ".";
      }
    }
    for (int i = 0; i < W; i++)
    {
      if(i%2==0){
        even += ".";
      }
      if(i%2==1){
        even += "#";
      }
    }

    for (int i = 0; i < H; i++)
    {
      if(i%2==0){
        cout << odd << endl;
      }
      if(i%2==1){
        cout << even << endl;
      }
    }
    printf("\n");
    odd = "";
    even = "";
    cin >> H >> W;
  }
}
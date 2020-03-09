#include <bits/stdc++.h>
using namespace std;
// Fault
int main()
{
       string hi = "hi";
       string hii = "hii";
       string hiiii = "hiiii";
       string hiiiii = "hiiiii";
       string hiiiiii = "hiii";
       string hiiiiiii = "hiii";
       string s;
       cin >> s;

       if (s.find(hi))
       {
              cout << "No"
                   << "\n";
              return 0;
       }
       if (s.find(hi) > 2)
       {
              cout << "Yes" << endl;
       }
}
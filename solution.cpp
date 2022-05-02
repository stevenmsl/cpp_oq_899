#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol899;
using namespace std;

/*takeaways
  - using BFS will timeout
  - if K = 1, you can't do much other than rotating the string
    - exhaust all possibilities and find the min string
  - if K > 1, you can re-arrange the string any way
    you like. The bigger the K the more flexibility you have
    in re-arranging the string
    - it doesn't dictate how many moves you can make
    - let say S="baaca", K=2
      - move 'b' -> aacab
      - move 'a' -> acaba
      - move 'a' -> cabaa
      - move 'a' -> cbaaa
      - move 'b' -> caaab
      - move 'c' -> aaabc
    - it's just like bubble sort but in a way that you
      can only move either the S[0] or S[1] to the end
      to achieve the goal
    - at the end of the day it's just sorting
*/

string Solution::arrange(string S, int K)
{
  if (K > 1)
  {
    sort(S.begin(), S.end());
    return S;
  }
  /* you can only rotate the string */
  auto t = S;
  for (auto i = 0; i < S.size(); i++)
  {
    S.push_back(S.front());
    S.erase(0, 1);
    t = min(t, S);
  }

  return t;
}
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol899;

/*
Input: S = "cba", K = 1
Output: "acb"
Explanation:
In the first move, we move the 1st character ("c") to the end, obtaining the string "bac".
In the second move, we move the 1st character ("b") to the end, obtaining the final result "acb".
*/
tuple<string, int, string>
testFixture1()
{
  return make_tuple("cba", 1, "acb");
}

/*
Input: S = "baaca", K = 3
Output: "aaabc"
Explanation:
In the first move, we move the 1st character ("b") to the end, obtaining the string "aacab".
In the second move, we move the 3rd character ("c") to the end, obtaining the final result "aaabc".
*/
tuple<string, int, string>
testFixture2()
{
  return make_tuple("baaca", 3, "aaabc");
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.arrange(get<0>(f), get<1>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.arrange(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}
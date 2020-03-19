#include <utility>
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main () {
  pair <string,int> planet, homeplanet;

  planet = make_pair("Earth",6371);

  homeplanet = planet;

  cout << "Home planet: " << homeplanet.first << '\n';
  cout << "Planet size: " << homeplanet.second << '\n';

  tuple<int,char> foo (10,'x');
  auto bar = make_tuple ("test", 3.1, 14, 'y');

  get<2>(bar) = 100;                                    // access element

  int myint; char mychar;

  foo = tie (myint, mychar);                            // unpack elements
  tie (ignore, ignore, myint, mychar) = bar;  // unpack (with ignore)

  mychar = get<3>(bar);

  get<0>(foo) = get<2>(bar);
  get<1>(foo) = mychar;

  cout << "foo contains: ";
  cout << get<0>(foo) << ' ';
  cout << get<1>(foo) << '\n';

  return 0;
}
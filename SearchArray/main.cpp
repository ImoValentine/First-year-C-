#include <iostream>
#include <iterator> // for std::begin, std::end
#include <algorithm> // for std::find
using namespace std;

int x;

int searchArray(int y)
{
  int a[] = {3, 6, 8, 33};
  int x = 8;
  bool exists = std::find(std::begin(a), std::end(a), x) != std::end(a);
  if (x == std::end(a))
{
    cout<<"not found\ n";
}
else
{
    cout<<" found \n";
}
}


int main()
{
    searchArray(x);
    return 0;
}

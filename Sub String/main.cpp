#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Hello user welcome to the substring program" << endl;
    string country="South America";
    string A=" Africa";
    country=country.substr(0,5)+A;
    std::cout<<country<<"\n";
    return 0;
}

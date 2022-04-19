#include <iostream>

using namespace std;

int main()
{
    cout << "Hello using welcome to the temperature program!" << endl;

    int temperature=50;

    switch(temperature){

case 0:

        cout<<"Freezing point of water \n";
        break;

    case 100:

        cout<<"Boiling point of water \n";
        break;

    default:
    cout<<"Not boiling or Freezing point of water \n ";
    }


    return 0;
}

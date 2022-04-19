#include <iostream>

using namespace std;

int main()
{
    cout << "switch"<< endl;
    int grade;
    int fee;
    bool leadrole;
    bool roles2;


switch(grade){
case 1:
    fee=45;
    cout<<"cost of outfit: "<<fee<<"\n";
case 2:
    fee=45;
    cout<<"cost of outfit: "<<fee<<"\n";
case 3:
    fee=65;
    cout<<"cost of outfit: "<<fee<<"\n";
case 4:
    fee=65;
    cout<<"cost of outfit: "<<fee<<"\n";
case 5:
    fee=65;
    cout<<"cost of outfit: "<<fee<<"\n";

case 6:

    if (leadrole=true){
        fee=100;
        cout<<"cost of outfit: "<<fee<<"\n";
}
else if (leadrole=false)
{
    if (roles2=true){
        fee=130;
        cout<<"cost of outfit: "<<fee<<"\n";
    }
    else
    {   fee=70;
        cout<<"cost of outfit: "<<fee<<"\n";
    }
}
case 7:

if (leadrole=true)
{   fee=100;
    cout<<"cost of outfit: "<<fee<<"\n";
}
else if (leadrole=false)
{
    if (roles2=true){
        fee=130;
        cout<<"cost of outfit: "<<fee<<"\n";
    }
    else
    {   fee=70;
        cout<<"cost of outfit: "<<fee<<"\n";
    }
}


}
return 0;
}

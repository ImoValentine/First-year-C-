#include <iostream>

using namespace std;

int main()
{
    cout << "Welocome to the program" << endl;
    char productstatus;
    float price=500;
    std::cout<<"Enter char code: \n";
    cin>>productstatus;

    switch (productstatus){
    case 'f':
        std::cout<<"The book is sold at full price: "<<price<<"\n";
        break;
    case 'd':
        std::cout<<"The book is sold at discounted price: "<<price- (price*0.10)<<"\n";
        break;
    case 'o':
        std::cout<<"The book is out of stock \n";
        break;
    }


    return 0;
}

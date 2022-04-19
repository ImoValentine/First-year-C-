#include <iostream>

using namespace std;

int main()
{   float i=0, j=0;
    float Stock_Items=3;
    float NR_materials=3;
    float total_expenses=0;
    float leather_items=0;
    cout << "Hello user! Welcome to the furniture program \n" << endl;
    std::cout<<"This program works using a 2 D array \n \n It calculates the amount of stock in the shop and the amount of leather items"<<"\n";
    //declaration of 2 dimensional array with all items in the shop
    //This array consists of 3 rows and 3 columns- 3 furniture type and 3 materials
    float stockArray[3][3]= {{1000.75,700.00,900.60},{2500.65,2800,2000.78},{500.49,2000.90,200.99}};
    //For loop for calculating total amount of items in the shop
    for ( i = 0; i < 3; i++ )//rows
    {
        for ( j = 0; j < 3; j++ )//columns
        {
            total_expenses+=stockArray[i][j];//sum

        }
    }

//For loop for calculating total amount of leather items in the shop
    for (i=0; i<3; i++)//rows- goes through all rows
    {
        for(j=1; j<2; j++)//coloumns- only goes through coloumn 1
        {
            leather_items+=stockArray[i][j];//sum
        }
    }//display results to the UI
    std::cout<<"The total amount of stock in the shop is: "<<total_expenses<<" items. \n \n";
    std::cout<<"The totoal amount of leather items is: "<<leather_items<<" items.\n \n";

    return 0;
}

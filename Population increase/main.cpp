#include <iostream>

using namespace std;

    int nrYears;//own variable- difference calculator
    int popul;
    int yr;

int population(int p, int y)
{

    cout<<"Enter population in 2019: ";
    cin>>popul;
    nrYears=yr-2019;
    int i;
    for (int i=0; i<nrYears; i++)
    {
        popul=popul*112/100;
    }

    cout<<"The population in "<<yr<<" is "<<popul<<"\n";


}


int main()
{
    cout << "Hello user, welcome to the population calculator!" << endl;
    cout<<"Enter year of population you want to calculate:";
    cin>>yr;
    popul=2000;
    population(popul, nrYears);
    return 0;
}

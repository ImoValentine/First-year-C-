#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double height, weight, bmi;

void getData(double & wei, double hei)
{
cout << "Enter your weight in Kilogramns: ";
cin >> weight;
cout << "Enter your height in meters: ";
cin >> height;

}
double calcBMI (double & wei, double & hei)
{
bmi= (weight)/(height * height);
return bmi;
}

void displayFittnessResults (double & bm)
{
cout << "Your BMI value is " << bmi <<
"\n\nBMI VALUES \n underweight: less than 18.5"<<
"\n Normal: between 18.5 and 24.9"<<
"\n Overweight: between 25 and 29.9"<<
"\n Obese: 30 or greater" << endl;

if (bmi<18.5){
    cout<<"You are underwight";
}

else if (bmi>18.5||bmi<24.9){
    cout<<"You are healthy";
}
else if (bmi>25.0||bmi<29.9){
    cout<<"You are overweight";
}
else if (bmi>30){
    cout<<"You are Obese";
}

}




int main()
{
cout<<"Greetings user! Welcome to the BMI calculator program. \n";
cout<<"....";
getData(height, weight);
calcBMI(height, weight);
bmi = calcBMI(weight, height);
displayFittnessResults(bmi);

}


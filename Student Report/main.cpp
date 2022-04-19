#include <iostream>
using namespace std;

int high=1;
int low=1;

void studentDetails(string Name, string Surname, string School){
    cout << "Please provide the following details below.";
    cout << "\nName: ";
    cin >> Name;
    cout << "Surname: ";
    cin >> Surname;
    cout << "Name of School: ";
    cin >> School;
}

int getMarks (int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){

    cout << "Please provide the mark obtained (0-100) for the following subjects.";
    cout << "\nEnglish: ";
    cin >> Eng;
    while (Eng>=0 && Eng<=100){
        cout << "Mathematics: ";
        cin >> Maths;
    while (Maths>=0 && Maths<=100){
        cout << "Life Orientation: ";
        cin >> LO;
    while (LO>=0 && LO<=100){
        cout << "History: ";
        cin >> His;
    while (His>=0 && His<=100){
        cout << "Computer Literacy: ";
        cin >> CL;
    while (CL>=0 && CL<=100){
        cout << "Art: ";
        cin >> Art;
    while (Art>=0 && Art<=100){
        cout << "All marks have been recorded";
        return 0;
}}}}}}}

void AverageYearMark(int avg, int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){
    avg = (Eng + Maths + LO + His + CL + Art)/6;
    cout << "\nThe average of the above marks is: ";
    cout << avg;
}
//problem area
int minMax(int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){
    int arr[] = {Eng,Maths,LO,His,CL, Art};
    int high = arr[0]; //highest mark

    for(int i = 1; i<6; i++){
        if(arr[i]>high){
        high = arr[i];
        }
    }
    cout << "Highest mark";
    cout << high;

    int low = arr[0]; // lowest mark

    for(int i = 1; i<6; i++){
        if(arr[i]<low){
        low = arr[i];
        }
    }
    cout << "Lowest mark";
    cout << low;
    return 0;
}

void passorFail (string dec, int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){
    int arr[] = {Maths,LO,His,CL, Art};
    int counta = 0;
    if(Eng>= 50){
        counta++;
        for(int i =0; i<5; i++){
            if(arr[i]>50){
                counta++;
            }}
        if(counta>=4){
            dec = "Pass";
        }
        else{
            dec = "Fail";
        }
            }
    else{
        dec = "Fail";
        }
    cout << dec;
    }
void awardDistinction(double& avg, int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){
    int arr1[] = {Eng,Maths,LO,His,CL, Art};
    string arr2[6];
    string overall;
    string distinction = "distinction";
    for(int i= 0; i<6;i++){
        if(arr1[i]>=75){
            arr2[i]= distinction;
        }
        else{
            arr2[i] = " ";
        }
    }
    for (int i = 0; i<6; i++)
    cout << arr2[i];

    if(avg>=75){
       overall = "distinction";
    }
}
void codeSymbol(string (&symbol)[6], int (&code)[6],double& avg, int& Eng, int& Maths, int& LO, int& His, int& CL, int& Art){
    int arr1[] = {Eng,Maths,LO,His,CL, Art};
    //symbol<string,6>;
    //code<int,6>;
    for (int i=0; i<6; i++){
        if(arr1[i]>=80 && arr1[i]<=100){
            symbol[i] = "A";
            code[i] = 7;
    }
        if(arr1[i]>=70 && arr1[i]<=79){
            symbol[i] = "B";
            code[i] = 6;
    }
        if(arr1[i]>=60 && arr1[i]<=69){
            symbol[i] = "C";
            code[i] = 5;
    }
        if(arr1[i]>=50 && arr1[i]<=59){
            symbol[i] = "D";
            code[i] = 4;
    }
        if(arr1[i]>=40 && arr1[i]<=49){
            symbol[i] = "E";
            code[i] = 3;
    }
        if(arr1[i]>=30 && arr1[i]<=39){
            symbol[i] = "F";
            code[i] = 2;
    }
        if(arr1[i]>=0 && arr1[i]<=29){
            symbol[i] = "FF";
            code[i] = 1;
    }
    }
    int avcode;
    string avsym;
    if(avg<=100 && avg>=80 ){
        avcode = 7;
        avsym  = "A";
    }
    if(avg<=79 && avg>=70 ){
        avcode = 6;
        avsym  = "B";
    }
    if(avg<=69 && avg>=60 ){
        avcode = 5;
        avsym  = "C";
    }
    if(avg<=59 && avg>=50 ){
        avcode = 4;
        avsym  = "D";
    }
    if(avg<=49 && avg>=40 ){
        avcode = 3;
        avsym  = "E";
    }
    if(avg<=39 && avg>=30 ){
        avcode = 2;
        avsym  = "F";
    }
    if(avg<=29 && avg>=0 ){
        avcode = 1;
        avsym  = "FF";
    }

    }
 void Dispay(string& Name, string& Surname, string& School, string (&symbol)[6] , int (&mark)[6], int (&code)[6], string (subject)[6]){

    cout <<"\n*******************************************************************************" << endl;
    cout <<"            STUDENT ACADEMIC RECORD                            " << endl;
    cout <<" This program input the learner marks of matric level subjects and prints the student final report" << endl;
    cout <<"*******************************************************************************" << endl;

    cout <<"Name: " + Name + " " + Surname + "  School: " + School;

    cout <<"\n\nSubject \t\tMark\t\tSymbol\t\tCode" << endl;
    for(int i = 0; i<6;i++){
        cout << subject[i] << "\t" << mark[i]<< "%\t\t" + symbol[i] << "\t\t" << code[i] << "\n";
    }
    cout << "\nAverage Year Mark: " << " 32 " << " with symbol " << " D " << " and code " << " 4 " << endl;
    cout << "\nOutcome: " << "Passed" << endl;

    cout << "\nThe highest mark was: " << " -" <<high<< endl;
    cout << "\nThe lowest mark was: " << " -" <<low<< endl;
    cout <<"*******************************************************************************" << endl;

}



int main (){
string n; string sn; string s; string dec;
int Eng; int Maths; int LO; int His; int CL; int Art;
double avg = 0;
string subject[] = {"English          ","Mathematics      ","Life Orientation ","History          ","Computer Literacy","Art              "};
string symbol[6];
int code[6];

studentDetails(n,sn,s);
getMarks(Eng, Maths, LO, His, CL, Art);
int mark[] = {Eng, Maths, LO, His, CL, Art};

AverageYearMark(avg, Eng, Maths, LO, His, CL, Art);
minMax(Eng, Maths, LO, His, CL, Art);
passorFail(dec,Eng, Maths, LO, His, CL, Art);
awardDistinction(avg, Eng, Maths, LO, His, CL, Art);
codeSymbol(symbol,code,avg,Eng,Maths,LO,His,CL,Art);
Dispay(n,sn,s,symbol,mark,code,subject);
}

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

string first_sentence;

void removeChar(string a){

    string new_sentence;
    first_sentence.erase(std::remove(first_sentence.begin(), first_sentence.end(), 'a'), first_sentence.end());
    std::cout<<first_sentence<<"\n";

   // return first_sentence;
}



int main()
{   cout << "Hello user! This program removes a character /n" << endl;
    cout<<"Enter a sentence: "<<endl;
    getline(cin, first_sentence, '\n');
    cout<<"New sentence "<<endl;
    removeChar(first_sentence);
    return 0;
}

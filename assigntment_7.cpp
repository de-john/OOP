//Assignment 7
//Find first word in a string
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    string phrase;
    string word;
    int end_position;
    
    cout<<"Enter a phrase"<<endl;
    getline(cin,phrase);
    
    end_position = phrase.find(" ");
        
    word= phrase.substr(0,end_position);
    cout<<"The first word entered in phrase is: "<<word<<endl;
    
    system("pause");
    return 0;
}

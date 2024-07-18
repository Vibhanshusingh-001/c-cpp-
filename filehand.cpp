#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream myFile;
    myFile.open("akansha.txt");
    myFile<<"Genome data science"<<endl;
    myFile<<"viral informatics"<<endl;
    myFile.close();
    return 0;
}
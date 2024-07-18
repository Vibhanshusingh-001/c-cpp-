//------------------>arrays
#include<iostream>
using namespace std;
int main(){
    /*array example*/
int marks[4]={45,85,65,21};
int mathmarks[4];
mathmarks[0]=548;
mathmarks[1]=5445;
mathmarks[2]=45447;
mathmarks[3]=846;

cout<<"these are mathmarks";
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;
cout<<endl;

cout<<"these are marks"<<endl;
cout<<marks[0]<<endl;
/*you can change the value of an array */
cout<<marks[1]<<endl;
marks[2]=222;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
    return 0;
}
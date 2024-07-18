/*pointers arithmatic*/
#include<iostream>
using namespace std;
int main(){
    int marks[4]={15,48,254,15};
    int*p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p)<<endl;
    return 0;
}
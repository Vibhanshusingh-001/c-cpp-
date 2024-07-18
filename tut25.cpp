/*poointers and arrays*/
//pointers----->pointers is datatype which holds the adress of other datatype

/*#include<iostream>
using namespace std;
int main(){
int marks[4]={45,15,25,31};
int* p=marks;
cout<<"the value of marks[0]"<<*p<<endl;
cout<<"the value of marks[1]"<<*(p+1)<<endl;
cout<<"the value of marks[2]"<<*(p+2)<<endl;
cout<<"the value of marks[3]"<<*(p+3)<<endl;
    return 0;
}*/





#include <iostream>
using namespace std;
int main(){
    int marks[4]={15,25,36,54};
    int* p=marks;
    cout<<"the value of [0] is"<<*p<<endl;
    cout<<"the value of [1] is"<<*(p+1)<<endl;
    cout<<"the value of [2] is"<<*(p+2)<<endl;
    cout<<"the value of [3] is"<<*(p+3)<<endl;
    

    return 0;
}

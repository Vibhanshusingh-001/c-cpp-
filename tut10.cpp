//-------->USE OF SCOPE RESOLUTION OPERATOR (::)
/*#include<iostream>
using namespace std;
int c=45;
int main(){
int a,b,c;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
c=a+b;
cout<<"the sum is"<<::c;
}&*/
/*#include <iostream>
using namespace std;
 int c=45;
int main (){
    int a,b,c;

    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the value of c is"<<::c;
    return 0;
}*/
#include<iostream>
using namespace std;
int c=65;
int main(){
int a,b,c;


cout<<"the value of a is  " <<a<<endl;
cin>>a;
cout<<"the value of b is " <<b<<endl;
cin>>b;
c=a+b;
cout<<c<<endl;
cout<<::c<<endl;
    return 0;
}
//scope------>where your variable exist
/*#include<iostream>
using namespace std;
int c=65;
int main(){
int a,b,c;
cout<<"enter the value of a"<<a<<endl;
cin>>a;
cout<<"enter the value of b "<<b<<endl;
cin>>b;
c =a+b;
cout<<c<<endl;
cout<<::c<<endl;


    return 0;
}*/

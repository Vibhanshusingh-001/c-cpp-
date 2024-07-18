
}*/
/*'typedef' ka use ham karte hai tab jab 'struct employee' ko 'ep. bulana chahte hai*/
#include<iostream>
using namespace  std;
typedef struct employee
{
    int eId;
    float salary;
    char favchar;

}ep;

int main(){
ep vibhu;
vibhu.eId =4545;
vibhu.favchar='c';
vibhu.salary=544454;
cout<<"the value is " <<vibhu.eId<<endl;
cout<<"the value is " <<vibhu.favchar<<endl;
cout<<"the value is " <<vibhu.salary<<endl;
    return 0;
}

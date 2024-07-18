
/*----------->classes  */
#include<iostream>
using namespace std;
class employee 
{
    private:
    int a,b,c;
    public:
    int d,e;
    /*functions*/
    void setdata(int a1, int b1, int c1);/*declaration*/
    void getdata(){
        cout<<"the value of a is  " <<a<<endl;
        cout<<"the value of a is  " <<b<<endl;
        cout<<"the value of a is  " <<c<<endl;
        cout<<"the value of a is  " <<d<<endl;
        cout<<"the value of a is  " <<e<<endl;
    }

};
void employee :: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){
    employee vibhu;
    /*vibhu.a = 134;-------> this will throw error because a is private*/
    vibhu.d=45;
    vibhu.e=85;
    vibhu.setdata(1,2,4);
    vibhu.getdata();
    return 0;
}
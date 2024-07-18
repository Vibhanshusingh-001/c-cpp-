//------------>FLOAT,DOUBLE,LONG DOUBLE LITERALS
/*c++ literals are data used for representing fixed point values that we can directly use in the code*/
#include<iostream>
using namespace std;
int main(){
float a=34.4f;
double b=34.4l;
cout<<"the size of 34.4"<<sizeof(34.4)<<endl;
cout<<"the size of 34.4 f "<<sizeof(34.4f)<<endl;
cout<<"the size of 34.4 F "<<sizeof(34.4F)<<endl;
cout<<"the size of 34.4 L "<<sizeof(34.4L)<<endl;
cout<<"the size of 34.4 l "<<sizeof(34.4l)<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int reg[]={001,002,003,003,004,005};
    int *p=reg;
    cout<<*(p++);
    cout<<*(++p);
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter a no: ";

    cin>>i;

    if (i%2==0)
    {
        cout<< "GIVEN NO IS EVEN"<<endl;
    }
    else
    {
        cout<<"Given no is odd"<<endl;
    }
    return 0;
}
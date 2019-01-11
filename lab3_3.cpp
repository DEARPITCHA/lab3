#include <iostream>
using namespace std;
int main(){

    double x=1,y=6;
    double sum ;
    while (y<=19){
        sum+=x/y;
       y=y+1;
    }
    cout<< sum; 

    return 0;
}
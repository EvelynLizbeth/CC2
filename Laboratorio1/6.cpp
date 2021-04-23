//EJERCICIO 6
#include<iostream>
using namespace std;
#include <math.h>
int main(){
    int sum1=0;
    int sum2=0;
    for (int i=1;i<=100;i++){
        sum1=sum1+pow(i,2);
        sum2=sum2+i;

    }
    sum2=pow(sum2,2);
    cout<<"La diferencia es: "<<sum2-sum1;
    return 0;
}
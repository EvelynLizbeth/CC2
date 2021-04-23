//EJERCICIO 10
#include<iostream>
using namespace std;
int main(){
    long long int sum=0;

    for (int i=15;i<2000000;i=i+2){
        int cont=0;
        if((i%3!=0)||(i%5!=0)||(i%7!=0)||(i%11!=0)||(i%13!=0)||(i%15!=0)||(i%21)||(i%35!=0)||(i%77!=0)||(i%221!=0)||(i%247!=0)){
            for (int j=1;j<=i;j=j+2){
                if (i%j==0){
                    cont=cont+1;
                }
            }
            if (cont==2){
                sum=sum+i;
            }
        }
    }
    sum=sum+2+3+5+7+11+13;
    cout<<"La suma es: "<<sum;
    return 0;
}
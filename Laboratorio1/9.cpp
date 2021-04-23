//EJERCICIO 9
#include<iostream>
using namespace std;
#include <math.h>
int main(){
    int a,b,c;
    for (a=1;a<500;a++){
        for (b=1;b<800;b++){
            for (c=1;c<900;c++){
                if ((a+b+c==1000) &&(pow(a,2)+pow(b,2)==pow(c,2))&&(a<b)&&(b<c)){
                    //cout<<a<<" "<<b<<" "<<c;
                    cout<<endl<<"abc = "<<a*b*c;
                }
            }
        }
    }

    return 0;
}
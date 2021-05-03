#include <iostream>
using namespace std;

 
int main()
{
    string cadena[15] = { "blue", "red","orange", "yellow" ,"p","rojo","o","g","r","a","morado","azul","dorado","o","r"};
 
    string temp;
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            if( (cadena[i]<cadena[j])   ){
                temp=cadena[i];       	   
                cadena[i]=cadena[j];
                cadena[j]=temp;
            }
        }
    }


    for (int i = 0; i < 15; i++)
        cout<<cadena[i] << "\n";
    return 0;

}


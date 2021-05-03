#include <iostream>
#include <string.h>
using namespace std;
void concatenar_Cadena(char a[],char b[])
{   int tam; 
    tam=strlen(b);
	for(int i=0;i<strlen(a);i++){
        b[tam+i]=a[i];
    }
	       
}
int main(){
	char a[]=" mundo";
	char b[100]="Hola";
	concatenar_Cadena(a,b);
	cout<<b;
	return 0;
}
















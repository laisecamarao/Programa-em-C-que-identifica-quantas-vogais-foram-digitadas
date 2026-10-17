#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vogais = 0;
    int i = 0;
    int x = 0;
    char simbolo;
    
    printf("quantos simbolos quer digitar: ");
    scanf("%d", &x);
    
    while(i<x){
    	printf("insira um simbolo: ");
    	scanf(" %c", &simbolo);
    	
		if( simbolo == 'A' || simbolo == 'a' || simbolo == 'E' || simbolo == 'e' || simbolo == 'I' || simbolo == 'i' || simbolo == 'O' || simbolo == 'o' || simbolo == 'U' || simbolo == 'u' ){
			vogais++;
		}
		i++;
	}
	
	printf("foram digitadas %d vogais", vogais);
    
    return 0;
}

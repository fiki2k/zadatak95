// Isprintajte sve ASCII vrijednosti i njihove znakove na ekran.

#include <stdio.h>  

int main()  
{  
    int i;  

	// ASCII vrijednosti idu od 0 do 255.
    for( i=0 ; i<=255 ; i++ )
    {  
        printf("ASCII vrijednost od znaka %c je %d\n", i, i);  
    }  

    return 0;  
}   

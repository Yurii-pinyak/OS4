#include <stdio.h> 
#include "test.h" 
 
int main() 
{ 
    char teststr[15] = "Gh2dFv3Gd2"; 
    showstr(teststr,15); 
    printf("\n"); 
    showintstr(teststr,15); 
    printf("\n"); 
    numcount(teststr,15); 
    printf("\n"); 
    makecaps(teststr,15); 
    printf("\n"); 
    makenocaps(teststr,15); 
    return 0; 
} 


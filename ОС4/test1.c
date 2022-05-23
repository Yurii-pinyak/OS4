#include "test.h" 
//вивід стрічки посимвольно 
void showstr(char *teststr,int size){ 
    for(int i = 0;i < size;i++){ 
        printf("%c",teststr[i]); 
    } 
} 
//перевод в інтові значення з аскі таблиці 
void showintstr(char *teststr,int size){ 
    for(int i = 0;i < size;i++){ 
        if((int)teststr[i] > 0){ 
        printf("%d ",(int)teststr[i]); 
        }; 
    } 
} 
//підрахунок кількості чисел в стрічці 
void numcount(char *teststr,int size){ 
    int result=0; 
    for(int i = 0;i < size;i++){ 
        if((int)teststr[i] >= 48 && (int)teststr[i]<=57){ 
        result++; 
        }; 
    } 
    printf("%d",result); 
} 


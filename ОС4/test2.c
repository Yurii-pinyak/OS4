#include "test.h"
//перевод маленьких літер в великі 
void makecaps(char *teststr,int size){ 
    int tempch; 
    for(int i = 0;i < size;i++){ 
        if((int)teststr[i] >= 97 && (int)teststr[i]<=122){ 
        tempch=(int)teststr[i]-32; 
        printf("%c",(char)tempch); 
        } 
        else{ 
            printf("%c",teststr[i]); 
        } 
    } 
     
} 
//перевод великих літер маленькі 
void makenocaps(char *teststr,int size){ 
    int tempch; 
    for(int i = 0;i < size;i++){ 
        if((int)teststr[i] >= 65 && (int)teststr[i]<=90){ 
        tempch=(int)teststr[i]+32; 
        printf("%c",(char)tempch); 
        } 
        else{ 
            printf("%c",teststr[i]); 
        } 
    } 
     
}

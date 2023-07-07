//Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր

#include <stdio.h>

int main(){
    int i = 0;
    int c = 0;

    char vowel[] = {'#', 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};   
    char consonants[] = {'#', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' , 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y' ,'Z'};
    
    char letter = ' ';

    printf("Please write the letter : ");
    scanf("%c",&letter);

    while(i < sizeof(vowel)){
        i++;

        if (vowel[i] == letter){
            printf("Its vowel\n");
        }
    }

    while(c < sizeof(consonants)){
        c++; //:D

        if (consonants[c] == letter){
            printf("Its consonants\n");
        }
    }
}
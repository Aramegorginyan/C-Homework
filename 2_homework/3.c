//Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:

#include <stdio.h>
#include <ctype.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Write the first number : ");
    scanf("%i", &a);

    printf("Write the second number : ");
    scanf("%i", &b);

    if(a > b){
        printf("%i bigger than %i\n",a,b);
    }else if (a == b){
        printf("%i equal to %i\n",a,b);
    }else{
        printf("%i biggeer than %i\n",b,a);
    }
}
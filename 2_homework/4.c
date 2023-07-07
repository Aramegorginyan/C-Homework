//Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, 
//եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը։

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Write the first number : ");
    scanf("%i", &a);

    printf("Write the second number : ");
    scanf("%i", &b);

    printf("Write the third number : ");
    scanf("%i", &c);

    if((a == b) < c){
        printf("%i is the biggest\n" ,c);
    }else if((c == b) < a){
        printf("%i is the biggest\n", a);
    }else if((a == c) < b){
        printf("%i is the biggest\n", b);
    }else{
        printf("All numbers are equal to each other\n");
    }
}
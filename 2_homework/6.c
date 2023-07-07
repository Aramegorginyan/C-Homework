//Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի 
//x և y ամբողջ թվային փոփոխականների արժեքները և կտպի էկրանին 
//(x * y + 21 * x / y - 200) արտահայտության արդյունքը

#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;

    printf("Write the first number : ");
    scanf("%i",&x);

    printf("Write the second number : ");
    scanf("%i",&y);

    int result = (x * y) + 21 * (x /y) - 200;
    printf("%i\n",result);
}
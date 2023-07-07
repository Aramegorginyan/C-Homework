//Ստեղծել sym անունով char տիպի փոփոխական։ 
//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ 
//Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false

#include <stdio.h>
#include <ctype.h>

int main() {
    char sym;

    printf("Write the number : ");
    scanf("%s",&sym);

    if(isdigit(sym)){
        printf("True\n");
    }else{
        printf("False\n");
    }
}
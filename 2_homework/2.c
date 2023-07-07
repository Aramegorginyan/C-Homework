//Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել 
//sym անունով փոփոխականի արժեքը, 
//որը լինելու է լատինական այբուբենի մեծատառ։ 
//Տպել էկրանին մուտքագրված տառին համապատասխանող փոքրատառը։

#include <stdio.h>
#include <ctype.h>

int main() {
    char sym = 'a';

    do {
        printf("Write a letter: ");
        scanf(" %c", &sym);
        if (!isalpha(sym)) {
            printf("It's not a letter.\n");
        }
    } while (!isalpha(sym));

    if (islower(sym)) {
        printf("Uppercase letter: %c\n", toupper(sym));
    } else {
        printf("Lowercase letter: %c\n", tolower(sym));
    }

    return 0;
}
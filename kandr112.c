#include <stdio.h>
main() {
int c;
c = getchar();
/*while (c != EOF) {
        putchar(c);
        c = getchar();
}
}*/
/*assignment may be done inside an expression so if we assign int c within the 'test'
        part of our while loop we get:*/
while((c = getchar()) != EOF) /* paren around an assignment within a conditional are 
        req. because '!=' is higher precedence than '=' */
  putchar(c);
  }

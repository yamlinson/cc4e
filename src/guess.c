#include <stdio.h>
int main() {
    int guess;

    printf("Guess the number!\n");
    printf("(Ctrl-D to quit...)\n");

    while ( scanf("%d", &guess) != EOF ) {
        if ( guess == 42 ) {
            printf("Nice work!\n");
            break;
        }
        /* Curly braces are technically optional after an if, if there is only one statement.
         * It's fine to include them, but not necessary */
        /* Also worth noting that the indentation of "else if" statements in c
         * is somewhat of an idiom, as the next if-else is really a nested block of the previous one,
         * but by convention it generally gets indented as if it were a multi-way "if, else if, else" */
        else if ( guess < 42 )
            printf("Too low - guess again\n");
        else
            printf("Too high - guess again\n");
    }
}

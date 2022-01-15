//
// Created by michael on 07/01/2022.
//

/**
 * Modify the square.c program so that is pauses after every 24 squares and displays the following message:
 *        Press Enter to continue ...
 *
 * After displaying the message, the program should use getchar to read a character. getchar won't allow the program
 * to continue until the user presses the Enter key.
 */


# include <stdio.h>

int main( void ) {

    long n, numberOfSquaresPrinted;

    printf( "Enter n: " );
    scanf( "%ld", &n );

    for ( long i = 2; i <= n; i += 2 ) {
        if ( i * i > n )
            break;
        numberOfSquaresPrinted++;

        if ( numberOfSquaresPrinted % 24 == 0 ) {
            printf( "Press Enter to continue ..." );
            char ch = getchar();
            while ( ch != '\n' )
                ch = getchar();
        }
        printf( "%ld\n", i * i );
    }

    return 0;
}


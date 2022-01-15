//
// Created by michael on 07/01/2022.
//

/**
 * Write a program that translates an alphabetic phone number into numeric form. Here are the letters on the keys:
 * 2 = ABC, 3 = DEF, 4 = GHI, 5 = JKL, 6 = MNO, 7 = PRS, 8 = TUV, 9 = WXY. If the original phone number contains
 * non-alphabetic characters ( digits or punctuation, for example ), leave them unchanged. You may assume that any
 * letters entered by the user are upper case.
 */

# include <stdio.h>
# include <ctype.h>

int main( void ) {

    printf( "Enter a phone number: " );

    char ch = getchar();

    while ( ch != '\n' ) {
        ch = toupper( ch );

        switch ( ch ) {
            case 'A':
            case 'B':
            case 'C': printf( "%d", 2 ); break;
            case 'D':
            case 'E':
            case 'F': printf( "%d", 3 ); break;
            case 'G':
            case 'H':
            case 'I': printf( "%d", 4 ); break;
            case 'J':
            case 'K':
            case 'L': printf( "%d", 5 ); break;
            case 'M':
            case 'N':
            case 'O': printf( "%d", 6 ); break;
            case 'P':
            case 'R':
            case 'S': printf( "%d", 7 ); break;
            case 'T':
            case 'U':
            case 'V': printf( "%d", 8 ); break;
            case 'W':
            case 'X':
            case 'Y': printf( "%d", 9 ); break;
            default : printf( "%c", ch ); break;
        }
        ch = getchar();
    }
    printf( "\n" );

    return 0;
}


//
// Created by michael on 07/01/2022.
//

/**
 * In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value.
 * The face value varies from one letter to another, based on the letter's rarity. ( Here are the face values:
 * 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ. ) Write a program that computes the value of a word
 * by summing the values of its letters:
 * Your program should allow any mixture of lower-case and upper-case letters in the word.
 */

# include <stdio.h>
# include <ctype.h>

int main( void ) {

    char letter;
    int scrabbleValue = 0;

    printf( "Enter a word: " );
    letter = getchar();

    while ( letter != '\n' ) {
        letter = toupper( letter );

        switch ( letter ) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U': scrabbleValue += 1; break;

            case 'D':
            case 'G': scrabbleValue += 2; break;

            case 'B':
            case 'C':
            case 'M':
            case 'P': scrabbleValue += 3; break;

            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y': scrabbleValue += 4; break;

            case 'K': scrabbleValue += 5; break;

            case 'J':
            case 'X': scrabbleValue += 8; break;

            case 'Q':
            case 'Z': scrabbleValue += 10; break;
        }
        letter = getchar();
    }
    printf( "Scrabble value: %d\n", scrabbleValue );

    return 0;
}


//
// Created by michael on 07/01/2022.
//

/**
 * Write a program that prints the values of sizeof( int ), sizeof( short ), sizeof( long ), sizeof( float ),
 * sizeof( double ) and sizeof( long double ).
 */

# include <stdio.h>

int main( void ) {

    int i;
    short j;
    long k;
    float l;
    double m;
    long double n;

    printf( "Bytes required to store an int: %zu\n", sizeof( i ) );
    printf( "Bytes required to store a short: %zu\n", sizeof( j ) );
    printf( "Bytes required to store a long: %zu\n", sizeof( k ) );
    printf( "Bytes required to store a float: %zu\n", sizeof( l ) );
    printf( "Bytes required to store a double: %zu\n", sizeof( m ) );
    printf( "Bytes required to store a long double: %zu\n", sizeof( n ) );

    return 0;

}


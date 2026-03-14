#include <stdio.h>
#include "string.c"

struct piece // all pieces have names, value, 
{
    struct string name;
    unsigned int value;

};

struct piece Pawn   = { {"Pawn  ", 4} , 1};
struct piece Knight = { {"Knight", 6} , 3};
struct piece Bishop = { {"Bishop", 6} , 3};
struct piece Rook   = { {"Rook  ", 4} , 5};
struct piece Queen  = { {"Queen ", 5} , 9};
struct piece King   = { {"King  ", 4} ,10};
\






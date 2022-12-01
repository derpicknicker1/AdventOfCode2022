#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <assert.h>


/*****************
 * Helper Makros *
 *****************/
// Return bigger number of x, y
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
// Return smaller number of x, y
#define MIN(x, y) (((x) > (y)) ? (y) : (x))
// Return biggest number of a, b, c, d
#define MAX4(a,b,c,d) ((MAX((a),(b)) > MAX((c),(d))) ? MAX((a),(b)) : MAX((c),(d)))
// Return smallest number of a, b, c, d
#define MIN4(a,b,c,d) ((MIN((a),(b)) < MIN((c),(d))) ? MIN((a),(b)) : MIN((c),(d)))
// Check if x is in range [y..z]
#define INRANGE(x, y, z) ((x) >= (y) && (x) <= (z))
// Calculate count of items in array
#define COUNT_OF(arr) (sizeof((arr)) / sizeof((arr)[0]))
// Boolean integration
#define true 1
#define false 0
typedef uint8_t bool;


/************************
 * Helper from helper.c *
 ************************/
// Convert string to integer
int toI(char *s);
// Remove whitespace from beginning of a string
char *ltrim(char *s);
// Remove whitespace from end of a string
char *rtrim(char *s);
// Remove whitespace from beginning and end of a string
char *trim(char *s);
// check if a char is a digit (0-9)
int isDigit(char c);
// check if a char is a hexadecimal digit (0-9,a-f,A-F)
int isHexDigit(char c);
// sum of numbers [1..n]
int gauss(int n);
// calc Hash of an integer(-array)
uint64_t iHash(int *val, int cnt);
// calc Hash of an char(-array)
uint64_t sHash(char *val, int cnt);
// Some compare functions for quick sort
int cmpLongDesc (const void * a, const void * b);
int cmpLongAsc (const void * a, const void * b);
int cmpIntDesc (const void * a, const void * b);
int cmpIntAsc (const void * a, const void * b);


/*************************************
 * Methods for solving daily puzzles *
 *************************************/
// Day 0 EXAMPLE
void get0a(char *f);
void get0b(char *f);

// Day 1
void get1a(char *f);
void get1b(char *f);

// Day 2
void get2a(char *f);
void get2b(char *f);

// Day 3
void get3a(char *f);
void get3b(char *f);

// Day 4
void get4a(char *f);
void get4b(char *f);

// Day 5
void get5a(char *f);
void get5b(char *f);

// Day 6
void get6a(char *f);
void get6b(char *f);

// Day 7
void get7a(char *f);
void get7b(char *f);

// Day 8
void get8a(char *f);
void get8b(char *f);

// Day 9
void get9a(char *f);
void get9b(char *f);

// Day 10
void get10a(char *f);
void get10b(char *f);

// Day 10
void get11a(char *f);
void get11b(char *f);

// Day 12
void get12a(char *f);
void get12b(char *f);

// Day 13
void get13a(char *f);
void get13b(char *f);

// Day 14
void get14a(char *f);
void get14b(char *f);

// Day 15
void get15a(char *f);
void get15b(char *f);

// Day 16
void get16a(char *f);
void get16b(char *f);

// Day 17
void get17a(char *f);
void get17b(char *f);

// Day 18
void get18a(char *f);
void get18b(char *f);

// Day 19
void get19a(char *f);
void get19b(char *f);

// Day 20
void get20a(char *f);
void get20b(char *f);

// Day 21
void get21a(char *f);
void get21b(char *f);

// Day 22
void get22a(char *f);
void get22b(char *f);

// Day 23
void get23a(char *f);
void get23b(char *f);

// Day 24
void get24a(char *f);
void get24b(char *f);

// Day 25
void get25a(char *f);
void get25b(char *f);
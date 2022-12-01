#include "advent.h"

int gauss(int n) {
	return ((n*n)+n)/2;
}

int cmpLongDesc (const void * a, const void * b) {
	long long res = *(long long*)a - *(long long*)b;
	return res < 0 ? 1 : res > 0 ? -1 : 0;
}

int cmpLongAsc (const void * a, const void * b) {
	long long res = *(long long*)a - *(long long*)b;
	return res < 0 ? -1 : res > 0 ? 1 : 0;
}

int cmpIntDesc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int cmpIntAsc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int toI(char *s) {
	int sum = 0, min = false;
	if(*s == '-') {
		*s++;
		min = true;
	}
	if(*s == '+')
		*s++;
    while (*s && *s != '\n')
        sum = sum * 10 + (*s++ - '0');
    return min?-sum:sum;
}

char *ltrim(char *s) {
    while(isspace(*s)) s++;
    return s;
}

char *rtrim(char *s) {
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s) {
    return rtrim(ltrim(s)); 
}

int isDigit(char c) {
	return (c >= '0' && c <= '9');
}

int isHexDigit(char c) {
	return (isDigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}

uint64_t iHash(int *val, int cnt) {
	uint64_t result = 5381;
	for(int i = 0; i < cnt; i++)
		result = ((result << 5) + result) + val[i];
	return result;
}

uint64_t sHash(char *val, int cnt) {
	uint64_t result = 5381;
	for(int i = 0; i < cnt; i++)
		result = ((result << 5) + result) + val[i];
	return result;
}
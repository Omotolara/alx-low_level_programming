include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of  bytes of s2 to add to s1
 * Return: NULL if fail, pointer to malloc memory otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";
    
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    size_t new_len = (n >= s2_len) ? s1_len + s2_len : s1_len + n;

    char *new_str = (char*) malloc(sizeof(char) * (new_len + 1));
    if (new_str == NULL) return NULL;
    
    memcpy(new_str, s1, s1_len);
    memcpy(new_str + s1_len, s2, (n >= s2_len) ? s2_len : n);
    new_str[new_len] = '\0';

    return new_str;
}

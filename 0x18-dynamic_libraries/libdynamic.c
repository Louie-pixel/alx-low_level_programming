#include "main.h"
#include <unistd.h>

int _isalpha(int c) {
    return (_islower(c) || _isupper(c));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

void _puts(char *s) {
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (s[0] == '-') {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; i++) {
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}

char *_strcat(char *dest, char *src) {
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; src[j] != '\0'; j++) {
        dest[i + j] = src[j];
    }

    dest[i + j] = '\0';

    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; src[j] != '\0' && j < n; j++) {
        dest[i + j] = src[j];
    }

    dest[i + j] = '\0';

    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

int _strcmp(char *s1, char *s2) {
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
        ;

    return s1[i] - s2[i];
}

char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        s[i] = b;
    }

    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
}

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                count++;
                break;
            }
        }
        if (accept[j] == '\0') {
            break;
        }
    }

    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        int i;
        for (i = 0; accept[i] != '\0'; i++) {
            if (*s == accept[i]) {
                return s;
            }
        }
        s++;
    }

    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *start = haystack;
        char *sub = needle;

        while (*sub != '\0' && *haystack == *sub) {
            haystack++;
            sub++;
        }

        if (*sub == '\0') {
            return start;
        }

        haystack = start + 1;
    }

    return NULL;
} 

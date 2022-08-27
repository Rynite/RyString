#include "../include/ry_string.h"
#include <stdlib.h>
// Just using this for str_len(), it's implementation is so simple, but just cuz I'm lazy :P
#include <string.h>
#include <stdio.h>
#include <stdbool.h>


char *string_copy(char *s) {
    char *new_string = (char*)malloc(strlen(s) * sizeof(char)); 
    for (int i = 0; i < strlen(s); i++) {
        *(new_string+i) = *(s+i);
    }
    return new_string;
}

void string_clear(char *s) {
    s = (char*)malloc(strlen(s) * sizeof(char));
    for (int i = 0; i < strlen(s); i++) {
        *(s+i) = 'a';
    }

}

char *string_pop(char *s, char letter) {

    char *pop_string = (char*)malloc(strlen(s)-1 * sizeof(char));
    int popped = 0;
    
    bool no_nulls = false;

    printf("%d\n", strlen(s)-1);


    for (int i = 0; i < strlen(s); i++) {
    
        if (*(s+i) == letter) {
            popped++;
            continue;
        }
        
        // printf("We'll add %c to position %d\n", s[i], i-popped);
        pop_string[i-popped] = s[i]; 

    }

    // for (int i = 0; i < strlen(s); i++) {

    //     if (i == 5) {
    //         break;
    //     }
    
    //     if (*(s+i) == letter) {
    //         printf("We'll add %c to position %d\n", *(s+(i+1)), i);
    //         *(pop_string+i) = *(s+(i+1));
    //         popped++;
    //     } else {
    //         char next_letter = *(s+(i+popped));
    //         int counter = 0;
    //         while (next_letter == letter)
    //         {
    //             next_letter++;
    //         }
    //         printf("We'll add %c to position %d\n", next_letter, i);
    //         *(pop_string+i) = *(s+(i+popped)); 
    //     }

    // }

    return pop_string;    
}

int string_compare(char *x, char *y) {
    unsigned int x_len = strlen(x);
    unsigned int y_len = strlen(y);

    if (x_len == y_len) {
        for (int i = 0; i < x_len; i++) {
            if (x[i] != y[i]) {
                return (1);
            } 
        }

        return (0);
    } else {
        return (2);
    }
}

char *string_pop_first(char *s) {
    char *pop_string = (char*)malloc(strlen(s)-1 * sizeof(char));

    for (int i = 0; i < strlen(s); i++) {
        if (i == 0) {
            continue;
        }

        pop_string[i-1] = s[i];
    }

    return pop_string;
}

char *string_pop_last(char *s) {
    char *pop_string = (char*)malloc(strlen(s)-1 * sizeof(char));

    for (int i = 0; i < strlen(s); i++) {
        if (i == strlen(s)-1) {
            continue;
        }

        pop_string[i] = s[i];
    }

    return pop_string;
}

char *string_flip(char *s) {
    char *flipped_string = (char*)malloc(strlen(s) * sizeof(char));

    for (int i = strlen(s)-1; i >= 0; i--) {
        flipped_string[(strlen(s)-i)-1] = s[i];
    }

    return flipped_string;
}

char *string_sep(char *s, char x) {
    char *rep_string = (char*)malloc((strlen(s)*2) * sizeof(char));

    for (int i = 0; i < strlen(s)*2; i+=2) {
        printf("Adding %c at index %d\n", s[i], i);
        rep_string[i] = s[i];
    }

    // I'll find a different way soon, but that's what I can only think of
    for (int i = 0; i < strlen(s)*2; i++) {
        if (rep_string[i] == '\0') {
            rep_string[i] = x;
        }
    }

    return rep_string;
}

// Return a replica of the given string
char *string_copy(char *s);

// Remove a letter
char *string_pop(char *s, char letter);

// Remove the last letter
char *string_pop_last(char *s);

// Remove the first letter
char *string_pop_first(char *s);

// Flip a string
char *string_flip(char *s);

// Compare two strings (0 if equal, 1 if not, 2 if one is greater than the other)
int string_compare(char *x, char *y);

// Seperate each letter with X
char *string_sep(char *s, char x);

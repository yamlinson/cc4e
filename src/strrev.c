#include <stdio.h>
int mystrlen(char self[]);
int main() {
    // Read in a string
    printf("Enter a string, up to 64 characters long\n");
    char mystr[64]; 
    scanf("%64s", mystr);
    // Get its length
    int mystr_len = mystrlen(mystr);
    // Read and write chars
    int i, j;
    j = mystr_len - 1;
    for(i=0; i<=j; i++) {
        char swap = mystr[j];
        mystr[j] = mystr[i];
        mystr[i] = swap;
        j--;
    }
    printf("%s\n", mystr);
}
int mystrlen(char self[]) {
    int i;
    for(i=0; self[i]; i++);
    return i;
}

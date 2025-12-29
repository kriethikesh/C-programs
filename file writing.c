#include <stdio.h>
int main() {
    FILE *file;
    file=fopen("sample.txt","a");
    fprintf(file,"Hello\nWorld\n");
    fclose(file);
    return 0;
}
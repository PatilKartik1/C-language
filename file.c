#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "w");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    fclose(fptr);

    return 0;
}
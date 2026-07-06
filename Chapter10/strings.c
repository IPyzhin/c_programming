#include<stdio.h> 
int main() {  
    char first[15], last[20], fname[13];

    FILE *file_w;
    printf("The program saves your first and last name into a file.");
    printf("\nEnter your first name:");
    scanf("%14s", &first[0]);
    printf("Enter your last name:");
    scanf("%19s", &last[0]);
    printf("\nFile where you want to save your name:");
    scanf("%12s", &fname);

    if ((file_w = fopen(fname, "w")) == NULL) {
        printf("Failed to open file");
    }
    else {
        fprintf(file_w, "%s %s", first, last);
    }

    fclose(file_w);
    printf("\n\nSuccessfully saved the data!");
}
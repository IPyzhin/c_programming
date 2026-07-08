#include <stdio.h>

void main() {
    int p_counter = 0;
    FILE *w_to_file;
    char f_name[] = "phonedir.txt";

    struct people {
        char firstname[20];
        char lastname[20];
        char phone[11];
    } people_list[51];
    
    printf("Enter first name:");
    scanf("%s", &people_list[p_counter].firstname);
    printf("Enter last name:");
    scanf("%s", &people_list[p_counter].lastname);
    printf("Enter telephone number:");
    scanf("%s", &people_list[p_counter].phone);
    p_counter++;

    if ((w_to_file = fopen(f_name, "w")) == NULL) {
        printf("Error opening file.");
    }
    else {
        fprintf(w_to_file, "%d\n%s %s %s", p_counter, people_list[p_counter-1].firstname,
            people_list[p_counter-1].lastname, people_list[p_counter-1].phone);
    }
    fclose(w_to_file);
    printf("Successfully saved the data.");
}
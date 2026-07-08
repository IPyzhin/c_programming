#include <stdio.h>

void main() {
    FILE* r_f_file;
    int p_counter = 0;
    char f_name[] = "phonedir.txt";

    struct people {
        char firstname[20];
        char lastname[20];
        char phone[11];
    } people_list[51];

    if ((r_f_file = fopen(f_name, "r")) == NULL) {
        printf("Error opening file.");
    }
    else {
        fscanf(r_f_file, "%d", &p_counter);
        for (int i = 0; i < p_counter; i++) {
            fscanf(r_f_file, "%s %s %s", people_list[i].firstname,
                                people_list[i].lastname, people_list[i].phone);
            printf("%s %s %s\n", people_list[i].firstname,
                    people_list[i].lastname, people_list[i].phone);
        }
        
    }
    fclose(r_f_file);
}
#include <stdio.h>
#include <string.h>

void main() {
    FILE *r_f_file, *wtf;
    int p_counter = 0, counter;
    char fname[20], lname[20], phone[12], f_remove[20], l_remove[20];
    char file_name[] = "phonedir.txt";
    int i, j = 0;

     struct people {
        char firstname[20];
        char lastname[20];
        char phone[12];
    } people_list[51];


    printf("Enter first name:");
    scanf("%19s", f_remove);
    printf("Enter last name:");
    scanf("%19s", l_remove);

    if ((r_f_file = fopen(file_name, "r")) == NULL) {
        printf("Error opening file.");
    }
    else {
        fscanf(r_f_file, "%d", &p_counter);
        counter = p_counter;
        for (i = 1; i <= p_counter; i++) {
            fscanf(r_f_file, "%19s %19s %11s", fname, lname, phone);
            if (strcmp(f_remove, fname) == 0 && strcmp(l_remove, lname) == 0) {
                counter--;
                continue;
            }
            else {
                strcpy(people_list[j].firstname, fname);
                strcpy(people_list[j].lastname, lname);
                strcpy(people_list[j].phone, phone);
                j++;
            }  
        }
        
    }
    fclose(r_f_file);

    if ((wtf = fopen(file_name, "w")) == NULL) {
        printf("Error opening file.");
    }
    else {
        fprintf(wtf, "%d\n", counter);
        for (int i = 0; i < counter; i++){
            fprintf(wtf, "%s %s %s\n", people_list[i].firstname,
                people_list[i].lastname, people_list[i].phone);
        }    
    }
    fclose(wtf);
    printf("Data removed from the directory.");
}
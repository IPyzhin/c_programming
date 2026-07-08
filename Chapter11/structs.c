#include <stdio.h>

int main()
{  
    int i;
    FILE *write_file;
    char file[] = "register.txt"; 
    struct person { 
        char firstname[15]; 
        char lastname[25]; 
        int age; 
        int weight;
    } person_list[5]; 
 
    for(i=0; i<5; i++) {  
        printf("Enter a first name, last name, age and weight separated by spaces:");
        scanf("%s%s%d%d", &person_list[i].firstname[0], &person_list[i].lastname[0], 
                                 &person_list[i].age, &person_list[i].weight); 
    } 

    if ((write_file = fopen(file, "w")) == NULL) {  
        printf("Error opening file.");
        return 0;
    } else {
        for(i=0; i<5; i++) { 
            fprintf(write_file, "%s %s %d %d", person_list[i].firstname,   
                person_list[i].lastname, person_list[i].age, person_list[i].weight);  
        } 
    } 
    fclose(write_file);
    printf("Successfully saved the data!"); 
    return 0;
}
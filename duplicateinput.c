#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int trials;
    int compareable = 0;
    int number_file;
    int t;
    int lowest_value = 0;
    char name_of_file[100][50];
    int file_id[100];

    printf("number of steps: ");
    scanf("%d", &trials);

    for (int i = 0; i< trials; i++) {

        printf("Number of files: ");
        scanf("%d", &number_file);

        int j = 0;
       
        while (j<number_file) {
            scanf("%s %d", name_of_file[j], &file_id[j]);
            j++;
        }
        printf("\n");
        lowest_value = file_id[0];
        for (int j = 0; j< number_file; j++) {
//            printf("%s %d\n", name_of_file[j], file_id[j]);
            for (int i = j + 1; i < number_file; i++) {
                compareable = strcmp(name_of_file[j], name_of_file[i]);
                if((strcmp(name_of_file[j], name_of_file[i]) == 0) &&  (lowest_value > file_id[j])){
                    
                    lowest_value = file_id[j];
                }
                else if((strcmp(name_of_file[j], name_of_file[i]) != 0) && (file_id[j] > file_id[i])){
                    t = file_id[j];
                    file_id[j] = file_id[i];
                    file_id[i] = t;
                }
            }
        }
        for (int j = 0; j< number_file; j++) {
            if (compareable != 0){
                printf("%d\n", file_id[j]);
            }
        }
        if (compareable == 0){
            printf("%d\n", lowest_value);
        }
    }
}


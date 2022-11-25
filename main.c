#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){
    
    char num_string[100];
    int num_array[100];
    int count = 0;
    int trial;

    char self_describing = 'T';
    
    printf("Enter number: ");
    scanf("%s", num_string);
    trial = strlen(num_string);
   
    
    for (int j = 0; j < trial; j++) {
        num_array[j] = num_string[j] - '0';
    }
    
    for (int j = 0; j < trial; j++) {
        printf("There are %d  %ds in the number \n", num_array[j],j);
    }
    for (int m = 0; m< trial; m++) {
        for (int i = 0; i< trial; i++) {
            if (num_array[i] == m) count++;
        }
        if(count == num_array[m]){
            self_describing = 'T';
        }
        else{
            self_describing = 'F';
            printf("\n");
            printf("Not self-describing\n");
            break;
        }
        count = 0;
        if (self_describing != 'F'){
            printf("\n");
            printf("Self-describing\n");
            break;
        }
    }
    
}


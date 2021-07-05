// Template to test all test_cases.txt at once

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int erros = 0; int total = 0;

    FILE *fptr1;
    FILE *fptr2;

    fptr1 = fopen("C:\\Path-To\\test_cases1.txt","r");
    fptr2 = fopen("C:\\Path-To\\test_cases1_output.txt","r");

    do
    {
        int dd; int mm; int yyyy; int out; int ctr = 0;
        fscanf(fptr1,"%d %d %d",&dd,&mm,&yyyy); // Get inputs from file
        
        /*
            Enter your logic here for processing on dd, mm, yyyy to get the output to compare with
            ctr is your result after the processing from the nomenclature i used
        */

        fscanf(fptr2,"%d", &out);
        if (out == ctr)
            printf("Success\n");
        else
        {
            printf("Error\n");
            erros++;
        }

    } while(fgetc(fptr1) != EOF && ++total);

    fclose(fptr1); 
    fclose(fptr2);

    printf("%d of %d\n",erros,total);
    return 0;
}
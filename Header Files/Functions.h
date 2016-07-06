//Currently Included Functions:		Generic String Input Prompt(2 parameters)
//					Most used standard libraries

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

const char * strninpt2(char option1[256],char option2[256]) {

    char userinput[256];
    int inputloop = 0;
    printf("Please enter a string string value. It should be either %s or %s",option1,option2/n);
    while(inputloop==0){
            scanf("%s", userinput);
            int up = 0;
            while(userinput[up]){
                userinput[up] = toupper(userinput[up]);
                up++;
            }
            if((strncmp(userinput,option1,256)==0)||(strncmp(userinput,option2,256)==0)){
                inputloop = 1;
                return userinput;
                }
            else{
                printf("The input was not recognized. Please enter %s or %s",option1,option2/n);
            }
    }
}


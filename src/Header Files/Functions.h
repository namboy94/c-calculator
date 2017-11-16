/*
Copyright 2014-2017 Hermann Krumrey <hermann@krumreyh.com>

This file is part of c-calculator.

c-calculator is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

c-calculator is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with c-calculator.  If not, see <http://www.gnu.org/licenses/>.
*/

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


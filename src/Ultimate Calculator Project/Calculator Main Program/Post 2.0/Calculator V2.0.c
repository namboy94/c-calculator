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

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

printf("Welcome to the HK Calculator!\n\n");
printf("Do you want to use the normal calculator or the special function calculator?\n");
char mode[256];
int lope = 0;
while(lope==0){
    scanf("%s", mode);
    int j = 0;
    while(mode[j]){
        mode[j] = toupper(mode[j]);
        j++;
    }
    if((strncmp(mode,"NORMAL",6)==0)||(strncmp(mode,"SPECIAL",6)==0)){
        lope = 1;
    }
    else{
        printf("The command could not be understood. Please answer \"normal\" or \"special\"\n");
    }
}
int lop = 0;
while (lop==0){

if(strncmp(mode,"NORMAL",6)==0){
    int loop = 0;
    while(loop==0){
        double initial, operant, answer, degrad;
        degrad = M_PI/180;
        char operate[256];
        printf("\nCALCULATOR MODE: NORMAL\n\nPlease enter your starting value\n");
        scanf("%lf", &initial);
        printf("\nPlease enter your operator type\n   Currently supported: +, -, *, /, sin, cos, tan, exp\n");
        scanf("%s", operate);
        int i = 0;
            while(operate[i]){
                operate[i] = toupper(operate[i]);
                i++;
            }

        if((strncmp(operate,"+", 2)==0)||(strncmp(operate,"-", 2)==0)||(strncmp(operate,"*", 2)==0)||(strncmp(operate,"/", 2)==0)||(strncmp(operate,"EXP", 3)==0)){
            printf("\nPlease enter your operating value\n");
            scanf("%lf", &operant);
        }

        if(strncmp(operate,"+", 2)==0){
            answer = initial+operant;
            printf("\nYou have calculated %lf %s %lf\n\nThe answer is %lf", initial, operate, operant, answer);
        }
        else{if(strncmp(operate,"-", 2)==0){
                answer = initial-operant;
                printf("\nYou have calculated %lf %s %lf\n\nThe answer is %lf", initial, operate, operant, answer);
            }
            else{if(strncmp(operate,"*", 2)==0){
                    answer = initial*operant;
                    printf("\nYou have calculated %lf %s %lf\n\nThe answer is %lf", initial, operate, operant, answer);
                }
                else{if(strncmp(operate,"/", 2)==0){
                        answer = initial/operant;
                        if(operant==0){
                            printf("You can't divide by 0!");
                        }
                        else{
                        printf("\nYou have calculated %lf %s %lf\n\nThe answer is %lf", initial, operate, operant, answer);
                        }
                    }
                    else{if(strncmp(operate,"SIN", 3)==0){
                            answer = sin(initial*degrad);
                            printf("\nYou have calculated %s %lf\n\nThe answer is %lf", operate, initial, answer);
                        }
                        else{if(strncmp(operate,"COS", 3)==0){
                                answer = cos(initial*degrad);
                                printf("\nYou have calculated %s %lf\n\nThe answer is %lf", operate, initial, answer);
                            }
                            else{if(strncmp(operate,"TAN", 3)==0){
                                    answer = tan(initial*degrad);
                                    printf("\nYou have calculated %s %lf\n\nThe answer is %lf", operate, initial, answer);
                                }
                                else{if(strncmp(operate,"EXP", 1)==0){
                                        answer = pow(initial,operant);
                                        printf("\nYou have calculated %lf %s %lf\n\nThe answer is %lf", initial, operate, operant, answer);
                                    }
                                    else{
                                    printf("\nYour answer is invalid");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("\n\nDo you want to do another calculation or change the calculator type?\n");
        int loopy = 0;
        while(loopy==0){
            char answer[256];
            scanf("%s", answer);
            int l = 0;
            while(answer[l]){
                answer[l] = toupper(answer[l]);
                l++;
            }
            if(strncmp(answer,"YES",3)==0){
                    loopy = 1;
                    loop = 0;
                }
            else{if(strncmp(answer,"NO", 2)==0){
                printf("\nThank you for using the HK calculator!");
                loopy = 1;
                loop = 1;
                lop = 1;
                }
                else{if(strncmp(answer,"CHANGE", 6)==0){
                        loopy = 1;
                        loop = 1;
                        lop = 0;
                        printf("Change to which mode?\n");
                        int lope2 = 0;
                        while(lope2==0){
                            scanf("%s", mode);
                            int ji = 0;
                            while(mode[ji]){
                                mode[ji] = toupper(mode[ji]);
                                ji++;
                            }
                            if((strncmp(mode,"NORMAL",6)==0)||(strncmp(mode,"SPECIAL",6)==0)){
                                lope2 = 1;
                            }
                            else{
                            printf("The command could not be understood. Please answer \"normal\" or \"special\"\n");
                            }
                        }
                    }
                    else{
                        printf("The command could not be understood. Please answer \"yes\", \"no\" or \"change\"\n");
                        loopy = 0;
                        loop = 0;
                        lop = 0;
                    }
                }
            }
        }
    }
    }


else{
        char functiontype[256];
        printf("\nCALCULATOR MODE: SPECIAL FUNCTIONS\n\n");
        printf("Which function do you want to use?\n\nCurrently supported:\tQuadratic equation solver(quadcalc)\n\t\t\tPlaceholder\n\n");
        int loopydoo = 0;
        while(loopydoo==0){
            scanf("%s", functiontype);
            int y = 0;
            while(functiontype[y]){
                functiontype[y] = toupper(functiontype[y]);
                y++;
            }

            int function;
            if(strncmp(functiontype,"QUADCALC",8)==0){
                function = 1;
            }
            else{
                function = 0;
            }

            switch (function){

                case 1:

                    printf("\nWelcome to the automatic quadratic equation solver!");
                    int schleif = 0;
                    while(schleif==0){
                        double a,b,c,x1,x2,end,check;
                        printf("\nPlease enter your \"a\" value\n");
                        scanf("%lf", &a);
                        printf("Please enter your \"b\" value\n");
                        scanf("%lf", &b);
                        printf("Please enter your \"c\" value\n");
                        scanf("%lf", &c);
                        printf("\nYour formula is: %lfx^2 + %lfx + %lf = 0\n\n", a, b, c);
                        check = b*b-4*a*c;

                        if(check>=0){
                        x1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
                        x2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
                        printf("The Calculation is complete!\nThe solutions are:\n\n\tx1 = %lf\n\tx2 = %lf\n\nDo you want to do another quadratic equation calculation?\n", x1, x2);
                        scanf("%lf", &end);
                        }
                        else{
                        printf("Your input values do not result in a real number.\nDo you want to do another quadratic equation calculation?\n");
                        scanf("%lf", &end);
                        }
                        int schleife = 0;
                        while(schleife==0){
                            char answer[256];
                            scanf("%s", answer);
                            int i = 0;
                            while(answer[i]){
                                answer[i] = toupper(answer[i]);
                                i++;
                            }
                        if(strncmp(answer,"YES",3)==0){
                            schleife = 1;
                            schleif = 0;
                        }
                        else{if(strncmp(answer,"NO", 2)==0){
                                printf("\nThank you for using the HK quadratic equation calculator!");
                                schleife = 1;
                                schleif = 1;
                            }
                            else{
                                printf("\nThe command could not be understood. Please answer \"yes\" or \"no\"\n");
                                schleife = 0;
                                schleif = 0;
                                }
                            }
                        }
                    }

                    loopydoo = 1;
                    break;

                default:
                    printf("The command could not be understood. Please enter one of the following commands:\nquadracalc\n\n");
            }
        }
        printf("\n\nDo you want to use another special function or change the calculator type?\n");
        int loopy = 0;
        while(loopy==0){
            char answer[256];
            scanf("%s", answer);
            int l = 0;
            while(answer[l]){
                answer[l] = toupper(answer[l]);
                l++;
            }
            if(strncmp(answer,"YES",3)==0){
                    loopy = 1;
                }
            else{if(strncmp(answer,"NO", 2)==0){
                printf("\nThank you for using the HK calculator!");
                loopy = 1;
                lop = 1;
                }
                else{if(strncmp(answer,"CHANGE", 6)==0){
                        loopy = 1;
                        lop = 0;
                        printf("Change to which mode?\n");
                        int lope2 = 0;
                        while(lope2==0){
                            scanf("%s", mode);
                            int ji = 0;
                            while(mode[ji]){
                                mode[ji] = toupper(mode[ji]);
                                ji++;
                            }
                            if((strncmp(mode,"NORMAL",6)==0)||(strncmp(mode,"SPECIAL",6)==0)){
                                lope2 = 1;
                            }
                            else{
                            printf("The command could not be understood. Please answer \"normal\" or \"special\"\n");
                            }
                        }
                    }
                    else{
                        printf("The command could not be understood. Please answer \"yes\", \"no\" or \"change\"\n");
                        loopy = 0;
                        lop = 0;
                    }
                }
            }
        }
}           //end of else loop
}           //end of lop loop
return 0;}  //end of main

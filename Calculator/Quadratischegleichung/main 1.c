#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    int loop = 0;
    while(loop<=0){
        double a,b,c,x1,x2,end,check;
        printf("Welcome to the automatic quadratic equation solver!\nPlease enter your \"a\" value\n");
        scanf("%lf", &a);
        printf("Please enter your \"b\" value\n");
        scanf("%lf", &b);
        printf("Please enter your \"c\" value\n");
        scanf("%lf", &c);
        printf("Your formula is: %lfx^2 + %lfx + %lf = 0\n", a, b, c);
        check = b*b-4*a*c;

        if(check>=0){
        x1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
        x2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
        printf("The Calculation is complete!\nThe solutions are:\n\n\tx1 = %lf\n\tx2 = %lf\n\nDo you want to do another calculation?\n", x1, x2);
        scanf("%lf", &end);
        }
        else{
        printf("Your input values do not result in a real number.\nDo you want to do another calculation?\n");
        scanf("%lf", &end);
        }

        //Here's the end of the working p[rogram


            char * answer;
            scanf("%s", &answer);
            printf("%s", answer);

            int i = 0;
            while(answer[i]){
                putchar (toupper(answer[i]));
                i++;
            }

            return(0);


       /*     if(strncmp(answer,"y",3)==0){
                    loopy = 1;
                    loop = -1;
                }
            else{if(strncmp(answer,"n",2)==0){
                printf("Thank you for using the HK quadratic equation calculator!");
                loopy = 1;
                loop = 1;
                }
                else{
                        printf("The command could not be understood. Please answer yes or no");
                }
            } */
        }
    }
}

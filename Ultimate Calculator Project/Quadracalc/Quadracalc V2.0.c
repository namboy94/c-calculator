#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("Welcome to the automatic quadratic equation solver!");
    int loop = 0;
    while(loop==0){
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
        printf("The Calculation is complete!\nThe solutions are:\n\n\tx1 = %lf\n\tx2 = %lf\n\nDo you want to do another calculation?\n", x1, x2);
        scanf("%lf", &end);
        }
        else{
        printf("Your input values do not result in a real number.\nDo you want to do another calculation?\n");
        scanf("%lf", &end);
        }
        int loopy = 0;
        while(loopy==0){
            char * answer;
            scanf("%s", answer);
            int i = 0;
            while(answer[i]){
                answer[i] = toupper(answer[i]);
                i++;
            }
            if(strncmp(answer,"YES",3)==0){
                    loopy = 1;
                    loop = 0;
                }
            else{if(strncmp(answer,"NO", 2)==0){
                printf("Thank you for using the HK quadratic equation calculator!");
                loopy = 1;
                loop = 1;
                }
                else{
                        printf("The command could not be understood. Please answer \"yes\" or \"no\"\n");
                        loopy = 0;
                        loop = 0;
                }
            }
        }
    }
    return 0;
}

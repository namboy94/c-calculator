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
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

printf("\nWelcome to the Pythagoras equation solver!");
int pitloop1 = 0;
while(pitloop1==0){

char cathyp[256];
printf("\n\nAre you looking for either:\n\nthe length of the long side of a right-angled triangle\nor\nthe length of one of the short sides of a right-angled triangle?\n");
int pytloop2 = 0;
while(pytloop2==0){
    scanf("%s", cathyp);
    int up = 0;
    while(cathyp[up]){
        cathyp[up] = toupper(cathyp[up]);
        up++;
    }
    if((strncmp(cathyp,"LONG",4)==0)||(strncmp(cathyp,"SHORT",5)==0)){
       pytloop2 = 1;
       }
    else{
        printf("Your input is invalid. Please enter either \"long\" or \"short\".\n");
    }
}
double a,b,c,a2,b2,c2,ab,ca,area,winkelsin,winkelsindeg,alpha,beta,gamma,roundlength,killrad;
killrad = 180/M_PI;

if(strncmp(cathyp,"LONG",4)==0){
    printf("\nPlease enter the length values for the two short sides of the triangle\n\n1.:\t");
    scanf("%lf", &a);
    printf("\n2.:\t");
    scanf("%lf", &b);
    printf("\n\n");
    a2 = a*a;
    b2 = b*b;
    ab = a2+b2;
    c = sqrt(ab);
    gamma = 90;
    winkelsin = a/c;
    winkelsindeg = asin(winkelsin);
    alpha = winkelsindeg*killrad;
    beta = 90-alpha;
    roundlength = a+b+c;
    area = 0.5*a*b;

    printf("You have entered the following lengths:\ta:\t\t%lf\n\t\t\t\t\tb:\t\t%lf\n\n",a,b);
    printf("This results in the following values:\tc:\t\t%lf\n\t\t\t\t\talpha:\t\t%lf\n\t\t\t\t\tbeta:\t\t%lf\n\t\t\t\t\tgamma:\t\t%lf",c,alpha,beta,gamma);
    printf("\n\t\t\t\t\tcircumference:\t%lf\n\t\t\t\t\tarea:\t\t%lf\n",roundlength,area);
}
else{
    printf("\nPlease enter the length values for the two known sides of the triangle\n\nlong side:\t");
    scanf("%lf", &c);
    printf("\nshort side:\t");
    scanf("%lf", &a);
    printf("\n\n");
    c2 = c*c;
    a2 = a*a;
    ca = c2-a2;
    b = sqrt(ca);
    gamma = 90;
    winkelsin = a/c;
    winkelsindeg = asin(winkelsin);
    alpha = winkelsindeg*killrad;
    beta = 90-alpha;
    roundlength = a+b+c;
    area = 0.5*a*b;

    printf("You have entered the following lengths:\tc:\t\t%lf\n\t\t\t\t\ta:\t\t%lf\n\n",c,a);
    printf("This results in the following values:\tb:\t\t%lf\n\t\t\t\t\talpha:\t\t%lf\n\t\t\t\t\tbeta:\t\t%lf\n\t\t\t\t\tgamma:\t\t%lf",b,alpha,beta,gamma);
    printf("\n\t\t\t\t\tcircumference:\t%lf\n\t\t\t\t\tarea:\t\t%lf\n",roundlength,area);
}
char continuepyth[256];
printf("\nDo you want to calculate another triangle using Pythagoras?\n");
scanf("%s", continuepyth);
int upp = 0;
while(continuepyth[upp]){
    continuepyth[upp] = toupper(continuepyth[upp]);
    upp++;
}
if(strncmp(continuepyth,"YES",3)==0){
    pitloop1 = 0;
}
else{if(strncmp(continuepyth,"NO",2)==0){
        printf("Thank you for using the HK Pythagoras Calculator!");
        pitloop1 = 1;
    }
    else{
        printf("\nThe command could not be understood. Please answer \"yes\" or \"no\"\n");
    }
}
}
}

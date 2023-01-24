#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double angle,sinus,cosinus,log_1,tan_1,roundUp;

main(void){
	
	printf("Please enter the angle value in radians:");
	scanf("%lf",&angle);
	
	sinus=sin(angle);
	cosinus=cos(angle);
	log_1=log10(0);
	tan_1=tan(0.785);
	roundUp=ceil(angle);
	
	
	printf("Sinus value=%.2lf\n",sinus);
	printf("Cosinus value=%.2lf\n",cosinus);
	printf("Log=%.2lf\n",log_1);
	printf("Tan=%.2lf\n",tan_1);
	printf("Round Up=%d\n",(int)roundUp);
	
	return(0);
}


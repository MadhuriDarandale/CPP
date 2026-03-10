#include <stdio.h>
#include <stdlib.h>

int main() {
	float phy, chem, math, bio, eng;
	float total_marks, percentage;
	char A, B, C, Fail, Grade;
	printf("Student Report: \n");
	printf("Enter marks for 5 subject (out of 100 each):\n");
	printf("phy; \n");
	scanf("%f",&phy);
	printf("chem; \n");
	scanf("%f", &chem);
	printf("math; \n");
	scanf("%f",&math);
	printf("bio; \n");
	scanf("%f",&bio);
	printf("eng; \n");
	scanf("%f",&eng);

	total_marks = phy + chem + math + bio + eng;
	printf("Total marks: %f\n", total_marks);

	percentage= (total_marks/500.00)* 100.00;
	printf("percentage= %f\n", percentage);

	Grade = (percentage>=75? "A": "Marks less than 75");
	        (percentage>=60? "B": "Marks less than 60");
	        (percentage>=45? "C": "Marks less than 45");
	        "Fail";

	        printf("Grade: \n", Grade);

}
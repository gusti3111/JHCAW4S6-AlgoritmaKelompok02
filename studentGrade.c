#include <stdio.h>



int main(){

	int totalStudent = 10;
	for(int i =1; i <= totalStudent;i++){
		double quiz;
		double tugas;
		double absent;
		double praktek;
		double UAS;
		char grade;
		char name[100];
		printf("Hi welcome to Grade Score app \n");
		printf("Please enter your name:\n");
		scanf("%s",name);


		printf("Enter the quiz score: \n");
		
		scanf("%lf",&quiz);
		printf("Enter the tugas score: \n");
		scanf("%lf",&tugas);
		printf("Enter the absent: \n");
		scanf("%lf",&absent);
		printf("Enter the practicum score: \n");
		scanf("%lf",&praktek);
		printf("Enter the UAS score: \n");
		scanf("%lf",&UAS);
		double averageScore = (quiz + tugas + absent + praktek + UAS) / 		5;
		if(averageScore <=55){
			grade = 'E';
			
		
		}else if(averageScore <=65){
			grade = 'D';

		
		}else if(averageScore <=75){
			grade = 'C';

		}else if(averageScore <= 85){
			grade = 'B';

		}else{
			grade = 'A';
		}
		printf("hi %s student number %d  quiz score is %.2f\n",name,i,averageScore);

		if(grade == 'D' || grade == 'E'){
			printf("Grade: %c (Tidak Lulus)\n", grade);
		}else{
			printf("Grade: %c (Lulus)\n", grade);
		}
		return 0;


			
	}
}


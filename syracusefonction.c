//Mounigan Gobier

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void syracuse(int u0, int u1, int ite);

int main() {

	//Variables

	FILE *file;
	file = fopen("data.txt","w");

	int u0, u1;
	int ite = 0;
	int alti;

	//Lecture & écriture

	printf("Donnez la valeur de u0: \n");
	scanf("%d", &u0);

	fprintf(file, "%d %d\n", u0, ite);

	alti = u0;

	//Boucle

	while (u1 != 1) {

		ite+=1;

		if (u0%2 == 0) {
		
		u1 = u0/2;
		u0 = u1;
		fprintf(file, "%d %d\n", u0, ite);

		}

		else {

		u1 = 3*u0+1;
		if (u1 > alti){
			alti = u1;
		}
		u0 = u1;
		fprintf(file, "%d %d\n", u0, ite);

		}
	}

	printf("Le temps de vol est %d \n", ite);
	printf("L'altitude est %d \n", alti);

	fclose(file);
	return 0;
}

void syracuse(int u0, int u1, int ite){


}

#include <stdio.h>



void printTable(int quadrat[9][9]){
	int i;
	int j;
	
	for(i = 0; i < 9; i++){
		printf("\n");
		for(j = 0; j < 9; j++){
			if(quadrat[i][j] != 0){
			printf("%2d ", quadrat[i][j]);
		}
	}
	}
}

void writeTable(int quadrat[9][9], int eingabe){
	int aktZeile;
	int aktSpalte;
	int spalteAlt;
	int zeileAlt;
	int counter;
	int ende;
	
	counter = 1;
	ende = eingabe * eingabe;
	
	aktZeile = eingabe / 2;
	aktSpalte = eingabe / 2;
	
	quadrat[aktZeile][aktSpalte] = 1;
	counter++;
	
	while(counter <= ende){
	spalteAlt = aktSpalte;
	zeileAlt = aktZeile;
	aktZeile = (aktZeile + 1) % eingabe ;
	aktSpalte --;
	if(aktSpalte < 0){
		aktSpalte = eingabe -1;
	}
	if(aktSpalte >= eingabe){
		aktSpalte = 0;
	}
	if(quadrat[aktZeile][aktSpalte] == 0){
		quadrat[aktZeile][aktSpalte] = counter;
		counter ++;
	}else{
		zeileAlt = zeileAlt + 2;
		if(zeileAlt >= eingabe){
		zeileAlt = zeileAlt - eingabe;
		}
		quadrat[zeileAlt][spalteAlt] = counter;
		aktZeile= zeileAlt;
		aktSpalte = spalteAlt;
		counter++;
	}
	
	}
	
	
	printTable(quadrat);
	
}


int main (void){
	int eingabe;
	int quadrat[9][9] = {0};
	
	printf("Bitte 3, 5, 7, oder 9 eingeben!");
	scanf("%d", &eingabe);
	writeTable(quadrat, eingabe);
	
	return 0;
	
}

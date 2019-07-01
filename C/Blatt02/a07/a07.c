#include <stdio.h>

unsigned liesbit(void){
	unsigned bit = 0;
	unsigned erg;
	unsigned bin[8] = {0};
	int i;
	int j;
	scanf("%u", &bit);
	erg = 0;
	j = 1;
	for(i = 0; i < 8; i++){
		bin[i] = bit % 10;
		bit = bit/10;
	}
	for(i = 0; i < 8; i++){
		erg = erg + j * bin[i];
		j = j * 2;	
	}
		
	return erg;

}

void schreibbit(unsigned bit){
	
	
		if(bit >= 128){
			printf("1");
			bit -= 128;
		}else{
			printf("0");
		}
		if(bit >= 64){
			printf("1");
			bit -= 64;
		}else{
			printf("0");
		}	
		if(bit >= 32){
			printf("1");
			bit -= 32;
		}else{
			printf("0");
		}
		if(bit >= 16){
			printf("1");
			bit -= 16;
		}else{
			printf("0");
		}
		if(bit >= 8){
			printf("1");
			bit -= 8;
		}else{
			printf("0");
		}
			if(bit >= 4){
			printf("1");
			bit -= 4;
		}else{
			printf("0");
		}
			if(bit >= 2){
			printf("1");
			bit -= 2;
		}else{
			printf("0");
		}
			if(bit >= 1){
			printf("1\n");
			bit -= 1;
		}else{
			printf("0\n");
		}
		
	
}


int main(void){
	unsigned a;
	unsigned b;
	a = liesbit();
	b = liesbit();
	
	schreibbit(a & b);
	schreibbit(a | b);
	schreibbit(a ^ b);
	return 0;
}


#include <stdio.h>

int main(void){
	int next;
	int zahlen[20] = {0};
	int i = 0;
	int j = 0;
	int temp;
	
	while(scanf("%d", &next) != EOF && i < 20){
		zahlen[i] = next;
		i++;
	}
	
	

	for(i = 0; i < 19; i++){
		for(j=i+1; j < 20; j++){
			if(zahlen[j] < zahlen[i]){
				temp = zahlen[i];
				zahlen[i] = zahlen[j];
				zahlen[j] = temp;
			}
	}
}
	
	for(i = 0; i < 20; i++){
		printf("%6d\n", zahlen[i]);
	}
	
	
	return 0;
} 

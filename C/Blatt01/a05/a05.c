#include <stdio.h>

int main(void) {
	char aktChar;
	char c;
	
	while((c = getchar())!=EOF){
		aktChar = c;
		
		if(aktChar >='A' && aktChar <= 'Z'){
	
	putchar(((aktChar - 'A' + 13) % 26 )+('A'));
		}
		else if(aktChar >='a' && aktChar <= 'z'){
	
	putchar(((aktChar - 'a' + 13) % 26 )+('a'));
		}
		else{
			putchar(c);
	}
}
		
		
		
	
	
	
	

	return 0;
	}

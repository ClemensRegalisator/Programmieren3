#include <stdio.h>
#include <string.h>



void run(char c, char encrypt[26], char decrypt[26]){
	int i;
	int bool = 1;
	for(i = 0; i < 26; i++){
	if(decrypt[i] == tolower(c)){
		printf("%c", encrypt[i]);
		bool = 0;
		break;
}
}
	if(bool == 1){
		printf("%c", c);
	}
}

int main (int argc, char *argv[]){
	
	char c;
	
	char encrypt [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char decrypt [] = {'i','r','j','m','n','z','l','t','a','c','o','g','d','e','k','s','v','b','p','h','x','q','y','u','w','f'};
	
	
	
	if(strcmp(argv[1], "encrypt") == 0){
	while(scanf("%c", &c) != EOF){
		
		run(c, decrypt, encrypt);
	}
}
	if(strcmp(argv[1], "decrypt") == 0){
	while(scanf("%c", &c) != EOF){
		
		run(c, encrypt, decrypt);
	}
}
	return 0;
}

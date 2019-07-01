#include <stdio.h>
#include <ctype.h>


char check(char c){
	c = toupper(c);
		 switch(c){
case 'B': case 'F': case'P': case'V': return '1'; break;
case 'C': case 'G': case'J': case'K': case'Q': case'S':case'X':case'Z': return '2'; break;
case 'D': case 'T': return '3'; break;
case 'L': return '4'; break;
case 'M': case 'N': return '5'; break;
case 'R': return '6'; break;
default: return '0'; break;
}
}

void soundex(const char s[], char res[7]){

	int count = 1;
	char *ausgabe = res;
	char c;
	char temp;
	res[0] = toupper(s[0]);
	temp = res[0];
	c = '0';
	s++;
	res++;
	
	while(*s && count < 6){
		if(c!= '0'){
		temp = c;
		}
		c = check(*s);
		if(c != temp && c != '0'){
			*res = c;
			count++;
			res++;
			
		}
		s++;
	}
	
	
	if(count < 6){
		while(count < 6){
			*res = '0';
			count++;
			res++;
		}
		}	
		res++;
		*res = '\0';
		printf("%s\n", ausgabe);		
		while(*ausgabe){
			*ausgabe = '0';
			ausgabe++;
		}

}int main(void){
	const char s[100] = {'0'};
	char res[7] = {'0'};
	
	while(scanf("%s",s) != EOF){
		
		soundex(s, res);
	}

	
	
	return 0;
}


	

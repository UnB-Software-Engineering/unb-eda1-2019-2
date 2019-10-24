#include <stdio.h>
#include <ctype.h>

int main(){
	int i, j, P, bin;
	char word[42];

	scanf("%d", &P);

	for(i = 0; i < P; i++){
	    scanf("%s", &word);
	    bin = 0;

	    for(j = 0; j < 42; j++){
	        if(word[j+1] == '\0')
                break;
	        if(tolower(word[j]) >= tolower(word[j+1])){
	            bin = 1;
	            break;
	        }
	    }
	    if(bin == 0)
            printf("%s: O\n", word);
	    else
	    printf("%s: N\n", word);
	}
	return 0;
}

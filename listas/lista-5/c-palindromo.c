#include<stdio.h>
#include<string.h>

int main() {
    int N;

    scanf("%d", &N);

    char *palavra;
    palavra = malloc(N*sizeof(char));

    scanf("%s", palavra);

	printf("%d\n", isPalindromo(palavra,N));

    return 0;
}

int isPalindromo(const char *str, int N){
	for (int i=0, j=N-1; i<j; i++, j--){
		if (str[i] != str[j])
			return 0;
	}
	return 1;
}

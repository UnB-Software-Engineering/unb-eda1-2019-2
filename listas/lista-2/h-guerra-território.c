#include <stdio.h>

int secao[100100], A, soma, n;

int main(){
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		scanf("%d", &secao[i]);
		A += secao[i];
	}

	for(int i=1; i<=n; i++){
		soma+=secao[i];
		if(2 * soma == A){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}

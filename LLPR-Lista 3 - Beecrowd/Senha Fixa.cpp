#include <stdio.h>

int main(){
	
	int x, y=2002;
	
	while (x!=y) {
		
		scanf("%d", &x);
		
		if (x!=y){
			printf("Senha Invalida\n");
		} else if (y=2002){
			printf("Acesso Permitido\n");
		}	
	}
	return 0;
}

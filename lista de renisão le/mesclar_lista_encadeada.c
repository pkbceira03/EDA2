# include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){
	celula *tmp1, *tmp2;
	
	tmp1=l1->prox;
	tmp2=l2->prox;
	
	while(tmp1 != NULL && tmp2 != NULL){
		if(tmp1->dado < tmp2->dado){
			l3->prox=tmp1;
			tmp1=tmp1->prox;
		}else{
			l3->prox=tmp2;
			tmp2=tmp2->prox;
		}
		l3=l3->prox;
	}
	if(tmp1!=NULL){
		l3->prox=tmp1;
	}
	if(tmp2!=NULL){
		l3->prox=tmp2;
	}
}

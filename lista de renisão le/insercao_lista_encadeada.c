# include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	int dado;
	struct le *prox;
} celula;

void insere_inicio (celula *le, int x){
	celula *novo = malloc(sizeof(celula));
	
	novo->dado = x;
	celula *old = le->prox;
	le->prox = novo;
	novo->prox = old;
	
}

void insere_antes (celula *le, int x, int y){
	celula *novo = malloc(sizeof(celula));
	celula *p, *q;
	novo->dado = x;
	p=le;
	q=le->prox;
	while(q!=NULL && q->dado != y){
		p=q;
		q=q->prox;
	}
	
	novo->prox = q;
	p->prox = novo;
}

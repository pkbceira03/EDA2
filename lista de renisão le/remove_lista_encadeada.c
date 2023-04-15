#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

int remove_depois (celula *le){
	celula *lixo;
	lixo = le->prox;
	
	if(lixo==NULL){
		return 0;
	}else{
		le->prox= lixo->prox;
		free(lixo);
		return 1;
	}
	
}

void remove_elemento (celula *le, int x){
	celula *p, *remover;
	celula *q;
	p =le;
	q= le->prox;
	while (q != NULL && q->dado != x) {
      p = q;
      q = q->prox;
   }
   if (q != NULL) {
   	
      remover=q;
      q=q->prox;
      p->prox=q;
      free (remover);
   }
}

void remove_todos_elementos (celula *le, int x){
	celula *p, *remover;
	celula *q;
	p =le;
	q=le->prox;
	while(q!=NULL){
		while (q->dado != x) {
	      p = q;
	      q = q->prox;
	   }
	   if (q != NULL) {
	      remover=q;
	      q=q->prox;
	      p->prox=q;
	      free (remover);
	   }
	}
}

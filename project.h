#include<conio2.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


struct TpDados{
      char valor;
      int col,lin;
      struct TpDados *pl,*pc;    
};

typedef struct TpDados MatEsp; // apelidos 

struct TpColuna{
    char coluna;
    struct TpColuna *prox;
    struct TpDados *celula;    
};

typedef struct TpColuna Coluna; // apelidos;

struct TpLinha{
    int linha;
    struct TpLinha *prox;
    struct TpDados *celula;  
};

typedef struct TpLinha Linha; // apelidos

struct desk{
     TpLinha *linha;
     TpColuna *coluna;    
};

void inicializa(desk &descritor){
        descritor.linha = NULL;
        descritor.coluna = NULL;   
}
Linha *novacaixaL(int elemento){
    
     TpLinha *caixa=(Linha*)malloc(sizeof(Linha));   
     caixa->celula = NULL;
     caixa->linha = elemento;
     caixa->prox  = NULL;
     return caixa;
}

Coluna *novacaixaC(char elemento){
      
      TpColuna *caixa=(Coluna*)malloc(sizeof(Coluna));
      caixa->celula = NULL;
      caixa->prox = NULL;
      caixa->coluna = elemento; 
      return caixa;
}

void insereLinha(desk &descritor,int elemento){
      
       if(descritor.linha == NULL){
          descritor.linha = novacaixaL(elemento);   
        }
        else{
             Linha *caixa = novacaixaL(elemento);
             
             if(descritor.linha->linha > caixa->linha){
                       caixa->prox = descritor.linha;
                       descritor.linha = caixa;     
             }
             else{
              Linha *aux = descritor.linha;
              Linha *anterior;
              
                    while(aux!=NULL && aux->linha < caixa->linha){
                      anterior = aux;
                      aux = aux->prox;   
                    }
                    anterior->prox = caixa;
                    caixa->prox = aux;
             }    
            
        }
}
void insereColuna(desk &descritor, char elemento){
    
            if(descritor.coluna == NULL)
              descritor.coluna = novacaixaC(elemento);  
            else{
               Coluna *caixa = novacaixaC(elemento);  
                 
                  if(descritor.coluna->coluna > caixa->coluna){
                      caixa->prox = descritor.coluna;
                      descritor.coluna = caixa; 
                  }
                  else{
                     Coluna *aux = descritor.coluna;   
                     Coluna *anterior;   
                         
                          while(aux!=NULL && aux->coluna < caixa->coluna){
                             anterior = aux;
                             aux = aux->prox;      
                          }
                          anterior->prox = caixa;
                          caixa->prox = aux;
                 }
            }
    
    
}
void exibirColuna(desk descritor){
    
         if(descritor.coluna != NULL){
             Coluna *aux = descritor.coluna;   
               
                gotoxy(1,1);
                 while(aux!=NULL){
                     printf("%c   ",aux->coluna);
                     aux = aux->prox;   
                 }   
         }
         
         else
          printf("Vazio");   
    
}
void exibirLinha(desk descritor){
     
             if(descritor.linha!= NULL){
              Linha *aux = descritor.linha;      
                    printf("\n");
                    while(aux != NULL){
                     printf("%d \n",aux->linha);
                     aux = aux->prox;   
                    }
              } 
              else
               printf("Vazio\n"); 
}

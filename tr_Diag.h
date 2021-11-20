#ifndef _Matrice_
#define _Matrice_
//#define MAX 1000
#include <stdio.h>

typedef struct{
    int n;
    int T[100][100];
}typMatTriDiag;

typMatTriDiag creerMatTriDiag(int a,int b, int c ,int n){
    int i=-1,j=-1;
    typMatTriDiag m1;
    m1.T[100][100]=0;
    m1.n=n;
    for(i=-1,j=-1;i<m1.n,j<m1.n;i++,j++){
    	
      m1.T[i+1][j+1]=a;
      m1.T[i+1][j+2]=b;
      m1.T[i+2][j+1]=c;
      
    }
    return m1;
}

typMatTriDiag saisirMatTriDiag(){
    int a,b,c,n;

    printf("a==> ");
    scanf("%d",&a);

    printf("b==> ");
    scanf("%d",&b);

    printf("c==> ");
    scanf("%d",&c);

    printf("n==> ");
    scanf("%d",&n);

    typMatTriDiag m1;

    m1=creerMatTriDiag(a,b,c,n);
    return m1;
}

void afficherMatDiag(typMatTriDiag *m1){
    int i,j;
    
    for(i=0;i<85;i++)printf("%s","*");
    printf("\n%35s %s \n\n"," ","la Matrice ");
    for(i=0;i<85;i++)printf("%s","*");
    printf("\n\n");
    for(i=0;i<m1->n;i++){
        for(j=0;j<m1->n;j++){
           printf("\t%3d",m1->T[i][j]);
        }printf("\n\n");
    }
}


#endif

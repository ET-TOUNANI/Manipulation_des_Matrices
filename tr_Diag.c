#include<stdio.h>
#include "tr_Diag.h"
#include "tounani.h"

int main()
{
	char *s="Manipulation des matrices";
	tounani_Header(s);
	
    typMatTriDiag m1;
    m1=saisirMatTriDiag();
    afficherMatDiag(&m1);
    
    return 0;
}


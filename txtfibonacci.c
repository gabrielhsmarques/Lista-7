#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *pont_arq;
    int i;

    pont_arq = fopen("arquivofib.txt","w");
    if (pont_arq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }
    // parte do fibonacci
    int n,k;
    printf("Entre com o tamanho da sequencia:\n");
    scanf("%d",&n);
    if(n > 94){
        return 0;
    }
    
    long int aray[n];
    aray[0] = 0;
    aray[1] = 1;

    for(k = 2; k < n; k++){
        aray[k]=aray[k - 1] + aray[k - 2];
        printf(" %ld\n", aray[k]);
    }

  //gravando caracter por caracter
    for(i=0; i < n; i++)
    {
        fprintf(pont_arq, "%d\n", aray[i]);    
    }
  
    fclose(pont_arq);
    return 0;
}

#include <stdio.h>
#include <string.h>
 
#define Max 300
typedef struct linha {
    
int numero;
char nome [100];
int nota; // de 0 a 20

} Pauta [Max];

//calcula a nota mais frequente entre os n primeiros alunos da pauta p.
int maisFreq (Pauta p, int n)
{
    //array com todas as notas de 0 a 20
    //inicializadas com freq zero
    int nota[20]={0};

    //contador de frequencias
    int freq=0;

    //variavel temporaria para guardar a nota com mais frequencia
    int maiorFreq = nota[0];
    

   
    //contabilizar as frequencias da nota, dos n primeiros alunos da pauta p
    for(int i=0;i < n; i++){
        
            
            if(nota[p[i].nota] != ' ' ){
                
                nota[p[i].nota]++;
            }
    
    }
    
    
    
    //encontrar a nota mais frequente
    for(int i=1;i<20;i++){
        
        if (maiorFreq < nota[i]){
            maiorFreq = nota[i];
			freq=i;
			
        }
		
	
    }
    //retornar a nota com mais freq
    	return freq;
 
    
}
 
int main( ) {

//Criar pauta
Pauta p = {1,"Jose",11,2,"Josefa",19,3,"Hugo",11};

//nota mais frequente entre os n primeiros alunos da pauta p
r = maisFreq(p, 3);

printf("%d\n", r);

return 0;
}
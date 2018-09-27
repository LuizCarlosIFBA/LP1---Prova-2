  
void contador(int intervalo,int vet[]){

int contUm = 0;
int contDois = 0;
for(int i=0;i<intervalo;i++){
	if(vet[i]==1){    
 		contUm++;
	}else contDois++;
}

int maior = 0;
if(contUm>contDois){
	maior = contUm;
}else maior = contDois;

if(intervalo == 2){
      printf("\n%d\n",maior);
      printf("Do(s) 2 número(s) sorteado(s), o que mais aparece(1 e 2), se repetem 1 vezes.\n");
      printf("Portanto, você obteve 1 ponto\n");
}else{printf("\n%d\n",maior);
      printf("Do(s) %d número(s) sorteado(s), o que mais aparece(moda), se repete %d vezes.\n",intervalo,maior);
      printf("Portanto, você obteve %d pontos\n",maior);
     }
}

int calcular(int n){
        int *vet= malloc((n)*sizeof(sizeof(int*)));
	for(int i=0;i<n;i++){
     		vet[i]=1+rand()%2;
		printf("%d ",vet[i]);
	}
	
	int aux;
	for(int i=0;i<n;i++){
		for(int j = 0;j<n;j++){
		       if(vet[i]<vet[j]){
		           aux = vet[i];
			   vet[i] = vet[j];
			   vet[j] = aux;	
		       }	
		}     		
	}
	contador(n,vet);
}

void ler(){
	int n;
	printf("Escreva quantos inteiros deseja sortear \n");
	scanf("%d",&n);
	
	calcular(n);	
}



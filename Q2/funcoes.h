  
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

printf("\n %d",maior);

}

int calcular(int *pN){
        int *vet= malloc((*pN)*sizeof(sizeof(int*)));
	for(int i=0;i<*pN;i++){
     		vet[i]=1+rand()%2;
		printf(" %d",vet[i]);
	}

	int aux;
	for(int i=0;i<*pN;i++){
		for(int j = 0;j<*pN;j++){
		       if(vet[i]<vet[j]){
		           aux = vet[i];
			   vet[i] = vet[j];
			   vet[j] = aux;	
		       }	
		}     		
	}
	contador(*pN,vet);
}

void ler(){
	int n;
	printf("Escreva quantos inteiros deseja sortear \n");
	scanf("%d",&n);
	int *pN = &n;
        
	calcular(pN);	
}



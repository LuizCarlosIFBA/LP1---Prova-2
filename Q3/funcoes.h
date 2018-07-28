int soma(int **quad, int n){
	int resultado = 0;
	for(int i= 0;i<n;i++){
		for(int j= 0;j<n;j++){
			resultado += quad[i][j]; 
		}
               
	}
	return resultado;
}

int subtracao(int **quad, int n){
	int resultado = 0;
	for(int i= 0;i<n;i++){
		for(int j= 0;j<n;j++){
			-quad[i][j]; 
		}
               
	}
	return resultado;
}

void quadMagico(){
	int n;
	do{	
	   	printf("Escreva a ordem da matriz(Números maiores que 2 e menores que 10) \n");
	   	scanf("%i",&n);
		if(n<2 || n>10){printf("Escreva apenas números maiores que 2 e menores que 10) \n");}
	   }while(n<2 && n>10);
	
        //aloco vetor principal
	int **quad = malloc(n*sizeof(sizeof(int*)));
	
	//aloco cada vetor linha
	for(int n=0; n<3; n++){
		quad[n] = (int *)malloc(3 * sizeof(int));
	}

	for(int i= 0;i<n;i++){
		for(int j= 0;j<n;j++){
			quad[i][j] =(rand()% 100) * 5;
		}
	}	
	/*
	//Ver os valores preenchidos
	for(int i= 0;i<n;i++){
		for(int j= 0;j<n;j++){
			printf(" %i",quad[i][j]);
		}
                printf("\n");
	}*/
	

	//Lógica matriz quadrada
	int diagPrincial = 0;
	int diagSecundaria = 0;
	for(int i= 0;i<n;i++){
		for(int j= 0;j<n;j++){
			if(i==j){
				diagPrincial += quad[i][j];
			}else if((i+j)-1==n){diagPrincial += quad[i][j];}
		}
               
	}

	if(diagPrincial == 15 && diagSecundaria == 15){
        	//printf("É quadrado mágico");
		soma(quad,n);
	}else subtracao(quad,n);
        
}


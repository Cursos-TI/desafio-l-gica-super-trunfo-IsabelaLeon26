#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    		// Declaração das variáveis
	char estado1[8], cod_carta1[5], cidade1[20];
	char estado2[8], cod_carta2[5], cidade2[20];
	int p_turistico1, p_turistico2, escolhaprimeiro, escolhasegundo, resultado1, resultado2;
	unsigned long int populacao1, populacao2;
	float area1, pib1, area2, pib2;
	float den_pop1, den_pop2, pib_cap1, pib_cap2;
	float superpoder1, superpoder2, soma1, soma2, escolha1carta1, escolha1carta2, escolha2carta1, escolha2carta2;
	
	
	// Dados de entrada para Carta 1
	printf("### Bem Vindo ao Jogo Super Trunfo! ###\n");
	printf("Digite os dados da Carta 1: \n");
	
	printf("Digite o Estado: \n");
    scanf("%s", estado1);
    
    printf("Digite o Codigo: \n");
    scanf("%s", cod_carta1);
    
    printf("Digite nome da cidade: \n");
    scanf("%s", cidade1);
     
	printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
  
    printf("Digite a area: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &p_turistico1);

	// Cálculos da densidade populacional e do PIB per Capita Carta 1
	den_pop1 = (float) populacao1 / area1;
	pib_cap1 = pib1 / populacao1;

    //Cálculos Inverso da densidade populacional e Super poder carta 1
    
    superpoder1 = populacao1 + area1 + pib1 + p_turistico1 + pib_cap1 + (1 / den_pop1);  

	// Dados de entrada para Carta 2
	printf("\nDigite os dados da Carta 2: \n");
	
	printf("Digite o Estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o Codigo: \n");
    scanf("%s", cod_carta2);
    
    printf("Digite nome da cidade: \n");
    scanf("%s", cidade2);
     
	printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
  
    printf("Digite a area: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &p_turistico2);

	// Cálculos da densidade populacional e do PIB per Capita Carta 2
	den_pop2 = (float) populacao2 / area2;
	pib_cap2 = pib2 / populacao2;

		
	//Cálculos Inverso da densidade populacional e Super poder carta 2
  
    superpoder2 = populacao2 + area2 + pib2 + p_turistico2 + pib_cap2 + (1 / den_pop2);
    
      
    // Impressão dos dados
	printf("\nOs dados das cartas digitadas foram:\n");

	// Carta 1
	printf("\nCarta 1:\n");
	printf("Estado: %s\n", estado1);  
	printf("Codigo: %s\n", cod_carta1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %u\n", populacao1);  
	printf("Area: %.2f km2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de Pontos Turisticos: %d\n", p_turistico1);
	printf("Densidade Populacional: %.2f hab/km2\n", den_pop1);
	printf("PIB per Capita: %.2f reais\n", pib_cap1);

	// Carta 2
	printf("\nCarta 2:\n");
	printf("Estado: %s\n", estado2);  
	printf("Codigo: %s\n", cod_carta2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %u\n", populacao2);  
	printf("Area: %.2f km2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %d\n", p_turistico2);
	printf("Densidade Populacional: %.2f hab/km2\n", den_pop2);
	printf("PIB per Capita: %.2f reais\n", pib_cap2);
	
	printf("\n Escolha o primeiro atributo para comparar: \n");
    printf("1. Populacao. \n");
    printf("2. Area. \n");
    printf("3. PIB. \n");
    printf("4. Pontos Turistico. \n");
    printf("5. Densidade Populacional. \n");
    printf("6. PIB per Capita. \n");
    printf("Qual sua escolha: \n");
    scanf("%d", &escolhaprimeiro);
	
	
	//Comparação das Cartas

    switch( escolhaprimeiro ) {
    case 1:
 	    printf("\n O jogador escolheu o atributo Populacao.\n");
 	    printf("Sera comparado a populacao entre a cidade %s (%u)", cidade1, populacao1);
		printf(" e a cidade %s (%u). \n", cidade2, populacao2); 
		resultado1 = (populacao1 > populacao2) ? 1:0;
		escolha1carta1 = populacao1;
		escolha2carta2 = populacao2;
		 
	break;
    case 2:
 	    printf("\n O jogador escolheu o atributo Area.\n");
 	    printf("Sera comparado a area entre a cidade %s (%.2f)", cidade1, area1);
		printf(" e a cidade %s (%.2f). \n", cidade2, area2); 
		resultado1 = (area1 > area2) ? 1:0;
		escolha1carta1 = area1;
		escolha1carta2 = area2;
	break;	
    case 3:
 	    printf("\n O jogador escolheu o atributo PIB.\n");
 	    printf("Sera comparado o PIB entre a cidade %s (%.2f)", cidade1, pib1);
		printf(" e a cidade %s (%.2f). \n", cidade2, pib2); 
	    resultado1 = (pib1 > pib2) ? 1:0;
	    escolha1carta1 = pib1;
		escolha1carta2 = pib2;
    break;
    case 4:
 	    printf("\n O jogador escolheu o atributo Pontos Turisticos.\n");
 	    printf("Sera comparado os pontos turisticos entre a cidade %s (%d)", cidade1, p_turistico1);
		printf(" e a cidade %s (%d). \n", cidade2, p_turistico2); 
		resultado1 = (p_turistico1 > p_turistico2) ? 1:0;
		escolha1carta1 = p_turistico1;
		escolha1carta2 = p_turistico2;
    break;
    case 5:
 	    printf("\n O jogador escolheu o atributo Densidade Populacional.\n");
 	    printf("Sera comparado a densidade populacional entre a cidade %s (%.2f)", cidade1, den_pop1);
		printf(" e a cidade %s (%.2f). \n", cidade2, den_pop2); 
		resultado1 = (den_pop1 < den_pop2) ? 1:0;
		escolha1carta1 = den_pop1;
		escolha1carta2 = den_pop2;	 
    break;
    case 6:
 	    printf("\n O jogador escolheu o atributo PIB per Capita.\n");
 	    printf("Sera comparado o PIB per Capita entre a cidade %s (%.2f)", cidade1, pib_cap1);
		printf(" e a cidade %s (%.2f). \n", cidade2, pib_cap2); 
		resultado1 = (pib_cap1 > pib_cap2) ? 1:0;
		escolha1carta1 = pib_cap1;
		escolha1carta2 = pib_cap2;	
    break;
    default:
       printf("Opcao invalida! \n");
}

    printf("\n Escolha o segundo atributo para comparar: \n");
    printf("1. Populacao. \n");
    printf("2. Area. \n");
    printf("3. PIB. \n");
    printf("4. Pontos Turistico. \n");
    printf("5. Densidade Populacional. \n");
    printf("6. PIB per Capita. \n");
    printf("Qual sua escolha: \n");
    scanf("%d", &escolhasegundo);
    
    
    if (escolhaprimeiro == escolhasegundo){
	    printf("Escolha outro atributo diferente do primeiro escolhido!\n"); 
	} else {
	       switch( escolhasegundo ) {
           case 1:
 	            printf("\n O jogador escolheu o atributo Populacao.\n");
 	            printf("Sera comparado a populacao entre a cidade %s (%u)", cidade1, populacao1);
		        printf(" e a cidade %s (%u). \n", cidade2, populacao2); 
		        resultado2 = (populacao1 > populacao2) ? 1:0;
				escolha2carta1 = populacao1;
		        escolha2carta2 = populacao2;	 
	       break;
           case 2:
 	            printf("\n O jogador escolheu o atributo Area.\n");
 	            printf("Sera comparado a area entre a cidade %s (%.2f)", cidade1, area1);
		        printf(" e a cidade %s (%.2f). \n", cidade2, area2); 
		        resultado2 = (area1 > area2) ? 1:0;
		        escolha2carta1 = area1;
		        escolha2carta2 = area2;
           break;
		   case 3:
 	            printf("\n O jogador escolheu o atributo PIB.\n");
 	            printf("Sera comparado o PIB entre a cidade %s (%.2f)", cidade1, pib1);
		        printf(" e a cidade %s (%.2f). \n", cidade2, pib2); 
	            resultado2 = (pib1 > pib2) ? 1:0;
	            escolha2carta1 = pib1;
		        escolha2carta2 = pib2;
           break;
           case 4:
 	            printf("\n O jogador escolheu o atributo Pontos Turisticos.\n");
 	            printf("Sera comparado os pontos turisticos entre a cidade %s (%d)", cidade1, p_turistico1);
		        printf(" e a cidade %s (%d). \n", cidade2, p_turistico2); 
		        resultado2 = (p_turistico1 > p_turistico2) ? 1:0;
		        escolha2carta1 = p_turistico1;
		        escolha2carta2 = p_turistico2;
           break;
           case 5:
 	            printf("\n O jogador escolheu o atributo Densidade Populacional.\n");
 	            printf("Sera comparado a densidade populacional entre a cidade %s (%.2f)", cidade1, den_pop1);
		        printf(" e a cidade %s (%.2f). \n", cidade2, den_pop2); 
		        resultado2 = (den_pop1 < den_pop2) ? 1:0;
				escolha2carta1 = den_pop1;
		        escolha2carta2 = den_pop2;	 
           break;
           case 6:
 	            printf("\n O jogador escolheu o atributo PIB per Capita.\n");
 	            printf("Sera comparado o PIB per Capita entre a cidade %s (%.2f)", cidade1, pib_cap1);
		        printf(" e a cidade %s (%.2f). \n", cidade2, pib_cap2); 
		        resultado2 = (pib_cap1 > pib_cap2) ? 1:0;
				escolha2carta1 = pib_cap1;
		        escolha2carta2 = pib_cap2;	
           break;
           default:
                printf("Opcao invalida! \n");
    }
    }
    
    //Soma dos atributos escolhidos e decisão da carta com maior soma
    
	soma1 = (float)(escolha1carta1 + escolha2carta1);
	soma2 = (float)(escolha1carta2 + escolha2carta2);
	
	if (soma1 > soma2){
		printf("\n A soma da carta 1 %s e: %.2f.\n", cidade1, soma1);
		printf("\n A soma da carta 2 %s e: %.2f.\n", cidade2, soma2);
		printf("\n A carta 1 (%s) venceu!\n", cidade1);
	} else if (soma2 > soma1){
		      printf("\n A soma da carta 1 %s e: %.2f.\n", cidade1, soma1);
		      printf("\n A soma da carta 2 %s e: %.2f.\n", cidade2, soma2);
		      printf("\n A carta 2 (%s) venceu!\n", cidade2);
	       } else {
	       	  printf("\n As cartas empataram na soma dos atributos!!!");
		   } 
	
	          
   if ( resultado1 && resultado2 ) {
   	  printf("\n Carta 1 %s venceu os dois atributos!", cidade1);
   } else if ( resultado1 != resultado2) {
   	        printf("\n A carta 1 e a carta 2 empataram! Cada uma ganhou em um dos atributos.\n");
   } else {
   	      printf("\n Carta 2 %s venceu os dois atributos!", cidade2);
   }   
   
   
      
return 0;
}

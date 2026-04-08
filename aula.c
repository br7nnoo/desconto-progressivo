
#include <stdio.h>
#include <iso646.h>

int main(){
           float camisa_valor, valor_bruto, desconto, porcentagem_desconto, valor_final;
           int quantidade_de_camisas;


           printf("Preco da camisa?\n");
           scanf("%f", &camisa_valor);
           printf("Quantas camisetas deseja comprar?\n");
           scanf("%d", &quantidade_de_camisas);

            valor_bruto = camisa_valor * quantidade_de_camisas;

            if(quantidade_de_camisas <= 2){

                printf("Ficou %.2f", valor_bruto);
            }else if(quantidade_de_camisas >= 3 and quantidade_de_camisas <= 5){
                            porcentagem_desconto = 0.10;

                            desconto = valor_bruto * porcentagem_desconto;

                            valor_final = valor_bruto - desconto;

                printf("voce ganhou %.2f de desconto, economizou %.2f e o valor final sera de %.2f", porcentagem_desconto, desconto, valor_final);
            }else if(quantidade_de_camisas >= 6 and quantidade_de_camisas >= 10){
                            porcentagem_desconto = 0.15;

                            desconto = valor_bruto * porcentagem_desconto;

                            valor_final = valor_bruto - desconto;

                printf("voce ganhou %.2f de desconto, economizou %.2f e o valor final sera de %.2f", porcentagem_desconto, desconto, valor_final);
            }else{
                            porcentagem_desconto = 0.20;

                            desconto = valor_bruto * porcentagem_desconto;

                            valor_final = valor_bruto - desconto;

                printf("voce ganhou %.2f de desconto, economizou %.2f e o valor final sera de %.2f", porcentagem_desconto, desconto, valor_final);
            }

           

           


}
                     
                
            
                              
        

                


       

        



      
        
        
      
                
                        
                
      

      
                

                


                
                   
                
                                
                
                        

                


                                       

                        
                        


                        

                        
                
           
                
                
                














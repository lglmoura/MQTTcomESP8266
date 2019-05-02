#include "gpio_init.h"
#define TOPICOLAMP1 "/quarto/lampada/lampada1"
int staTop1 = LOW;
#define TOPICOLAMP2 "/quarto/lampada/lampada2"
int staTop2 = LOW;

// 
//FunÃ§Ã£o: Trata o valor do Topico
//ParÃ¢metros: nenhum
//Retorno: nenhum
void trataTopico(char* topic,String msg){

  
    if (strcmp(topic,TOPICOLAMP1)==0){
      if(msg.equals("1")){
        staLed1 = HIGH;
      }
      if(msg.equals("0")){
        staLed1 = LOW;
      }
    }

    if (strcmp(topic,TOPICOLAMP2)==0){
      if(msg.equals("1")){
        staLed2 = HIGH;
      }
      if(msg.equals("0")){
        staLed2 = LOW;
      }
    }
    

    Serial.print("Led Topico 1:");
    Serial.println(staLed1);

    Serial.print("Led Topico 2:");
    Serial.println(staLed2);
  
    
    digitalWrite(ledTop1, staLed1);
    digitalWrite(ledTop2, staLed2);
    digitalWrite(releTop2,staTop2);
  
}

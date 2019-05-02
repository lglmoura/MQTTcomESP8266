#define ledTop1 D4 // Led digital 2
int staLed1 = LOW;

#define ledTop2 D5 // Led digital 5
int staLed2 = LOW;

#define releTop2 D7 // Rele digital 7
#define inteTop2 D6 // Interuptor digital 6


void iniciaGPIO(void){
  
  pinMode(ledTop1, OUTPUT);
  digitalWrite(ledTop1, LOW);

  pinMode(ledTop2, OUTPUT);
  digitalWrite(ledTop2, LOW);

  pinMode(releTop2,OUTPUT);
  digitalWrite(releTop2,LOW);

  pinMode(inteTop2,INPUT);
  
}

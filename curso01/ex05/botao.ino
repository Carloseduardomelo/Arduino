
int led = 2;
int botao = 3;
int press = 0;


void setup(){
   pinMode(led, OUTPUT);
   pinMode(botao,INPUT) 
}

void loop(){
    press = digitalRead(botao);
    if(press == HIGH){
        digitalWrite(led, HIGH);
        delay(2000);
    }else{
        digitalWrite(led, LOW);
        delay(500);
    }
}
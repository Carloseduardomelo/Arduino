int led = 2;
int botao = 3;
int press = 0;
int atv = 0;



void setup(){
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT);
}

void loop(){
    press = digitalRead(botao);
    if (press == HIGH){
        delay(500);
        switch (atv) {
            case 0:
              digitalWrite(led, HIGH);
              atv = 1;
              break;
            case 1:
              digitalWrite(led, LOW);
              avt = 0;
              break;
        }
    }
}
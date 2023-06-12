int pinoV = 11;
int pinoA = 10;
int pinoD = 9;
int botao = 5;
int press = 0;
int del = 0;

void setup(){
    pinMode(pinoV, OUTPUT);
    pinMode(pinoA, OUTPUT);
    pinMode(pinoD, OUTPUT);
    pinMode(botao, INPUT);
}

void loop(){
    press = digitalRead(botao);
    if (press == HIGH){;
        if (del == 0){
            analogWrite(pinoV, 255);
            del += 1;
        }else if (del == 2){
            analogWrite(pinoA,255);
            del += 1;
        }else{
            analogWrite(pinoD,255);
            del -=2;
        }
    }
}
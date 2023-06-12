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
        switch(del){
            case 0:
            analogWrite(pinoV, 255);
            del += 1;
            
            break;
            case 1:
            analogWrite(pinoV,0);
            analogWrite(pinoA, 255);
            del += 1;
            break;
            case 2:
            analogWrite(pinoA,0);
            analogWrite(pinoD, 255);
            del -= 2;
            break; 
        }
    }
}
/*
int pinoR = 11;
int pinoB = 10;
int pinoG = 9;


void setup() {
    pinMode(pinoR, OUTPUT);
    pinMode(pinoB, OUTPUT);
    pinMode(pinoG, OUTPUT);
}

void loop() {
    analogWrite(pinoR, 255);
    delay(500);
    analogWrite(pinoR, 0);
    analogWrite(pinoB, 255);
    delay(500);
    analogWrite(pinoB, 0);
    analogWrite(pinoG, 255);
    delay(500);
    analogWrite(pinoG, 0);
}
*/

// para quando o pino for positivo

bool anodo_comun = true;
int pinoR = 11;
int pinoB = 10;
int pinoG = 9;

void setup() {
    pinMode(pinoR, OUTPUT);
    pinMode(pinoB, OUTPUT);
    pinMode(pinoG, OUTPUT);
}
void loop() {
    setCor(255, 0 , 0);
    delay(1000);
    setCor(0, 255, 0);
    delay(1000);
    setCor(0, 0, 255);
}

void setCor(int vml , int vrd, int azl){
    if(anodo_comun == true){
        vml = 255 - vml;
        vrd = 255 - vdr;
        azl = 255 - azl;
    }
    analogWrite(pinoR, vml);
    analogWrite(pinoB, vrd);
    analogWrite(pinoG, azl);
}
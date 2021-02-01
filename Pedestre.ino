
int pedverde = 9;
int pedvermelha = 8;
int carroverde = 12;
int carroamarelo = 11;
int carrovermelho = 10;

void setup(){

    //Pinos Ativados
    pinMode(pedverde,OUTPUT);
    pinMode(pedvermelha,OUTPUT);
    pinMode(carroverde,OUTPUT);
    pinMode(carroamarelo,OUTPUT);
    pinMode(carrovermelho,OUTPUT);
    //LEDS Ligados Carro, por padrão.
    digitalWrite(carroverde,HIGH);
    digitalWrite(carroamarelo,LOW);
    digitalWrite(carrovermelho,LOW);
    //LEDS Ligados Pedestres, por padrão.
    digitalWrite(pedverde,LOW);
    digitalWrite(pedvermelha,HIGH);

}

void loop(){

    digitalWrite(carroverde,HIGH);
    digitalWrite(pedvermelha,HIGH);
    delay(5000);

    digitalWrite(carroverde,LOW);
    digitalWrite(carroamarelo,HIGH);
    delay(3000);

    digitalWrite(carroamarelo,LOW);
    digitalWrite(carrovermelho,HIGH);
    digitalWrite(pedvermelha,LOW);
    digitalWrite(pedverde,HIGH);
    delay(5000);
    digitalWrite(pedverde,LOW);

    for(int x = 0; x <= 10; x++){

        digitalWrite(pedvermelha,HIGH);
        delay(350);
        diditalWrite(pedvermelha,LOW);
        delay(350);
    }

    digitalWrite(carrovermelho,LOW);

}
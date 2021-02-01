

float velocidade_veiculo;
int velocidade_permitida;

void setup(){

    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);

    Serial.begin(9600);

}
void loop(){
    velocidade_permitida = 60;
    velocidade_veiculo = 55;

    Serial.println("");
    Serial.print("Sua velocidade e: ");
    Serial.print(velocidade_veiculo);
    Serial.println(" KM/h");

    if (velocidade_veiculo > velocidade_permitida) {

        Serial.println("Voce esta acima da velocidade permitida");

        digitalWrite(3,HIGH);
       
    }

    else {

        Serial.println("Voce esta velocidade maxima permitida");

        digitalWrite(2,HIGH);
       

    }
    delay(2500);

}
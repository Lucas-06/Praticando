/*
    Esse programa tem como objetivo utilizar o Arduino como um 'Sensor de Temperatura', 
    verificando o valor de uma variável e determinando a temperatura do ambiente, 
    validando se ele está acima ou abaixo da temperatura ideal.

    Autor: Lucas Araujo
    Data: 19/01/2021
    
*/

float temperatura_IDEAL;
float temperatura_ANORMAL;
int temperatura_CRITICA;
int temperatura_AMBIENTE;
void setup(){

    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);

    Serial.begin(9600);

}

void loop(){
    temperatura_IDEAL = 25;
    temperatura_ANORMAL = 70;
    temperatura_CRITICA = 75;
    temperatura_AMBIENTE = 80;
  
	Serial.println("");
    Serial.println("");
    Serial.print("Temperatura Ambiente: ");
    Serial.print(temperatura_AMBIENTE);
    Serial.println(" Graus Celsius");

    if(temperatura_AMBIENTE <= temperatura_IDEAL){

      	Serial.println("Temperatura OK");
        digitalWrite(2,HIGH);
      	delay(500);
      	digitalWrite(2,LOW);
      
    }

    else if(temperatura_AMBIENTE > temperatura_IDEAL && temperatura_AMBIENTE <= temperatura_ANORMAL){
      	
      	Serial.print("ALERTA! Risco de Superaquecimento");
      	digitalWrite(3,HIGH);
      	delay(500);
      	digitalWrite(3,LOW);
       
    }         
   
    else if (temperatura_AMBIENTE > temperatura_ANORMAL && temperatura_AMBIENTE >= temperatura_CRITICA){
      
        Serial.println("Alerta! Temperatura Critica");
        Serial.print("Desligue imediatamente!");
      	digitalWrite(4,HIGH);
        delay(500);
      	digitalWrite(4,LOW);
    }
   delay(500);
}
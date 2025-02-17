/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltIznExamples/Blink
*/

// Definições
#define LED_Vermelho 2
#define LED_Verde 4
#define LED_Azul 6

// Variáveis de tempo de espera
int tempoEspera = 200;
int tempoInt = 700;

// Função para ligar o led vermelho três vezes
void sequencia_ligar_vermelho_3x() {
    for (int c = 0; c <= 3; c++) {
      digitalWrite(LED_Vermelho,  1);
      delay(tempoEspera);
      digitalWrite(LED_Vermelho, 0);
    }
}

// Função para ligar o led verde três vezes
void sequencia_ligar_verde_3x() {
  for (int i = 0; i <= 3; i++) {
      digitalWrite(LED_Verde,  1);
      delay(tempoEspera);
      digitalWrite(LED_Verde, 0);
    }
}

// Função para ligar o led azul três vezes
void sequencia_ligar_azul_3x() {
  for (int a = 0; a <= 3; a++) {
      digitalWrite(LED_Azul,  1);
      delay(tempoEspera);
      digitalWrite(LED_Azul, 0);
    }
}

// Configuração
  void setup() {
    pinMode(2, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
   sequencia_ligar_vermelho_3x();
   delay(tempoInt);
   sequencia_ligar_verde_3x();
   delay(tempoInt);
   sequencia_ligar_azul_3x();
   delay(tempoInt);
}


/*
// Variável para LED escolhido

// Variáveis para o tempo de espera
int tempoEspL = 800;
int tempoInt = 300;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    // Ligando os LED's
     digitalWrite(12, 1);
      delay(tempoEspL);

    digitalWrite(12, 0);
      delay(tempoEspL);

    digitalWrite(12, 1);
    delay(tempoInt);
    digitalWrite(10, 1);
      delay(tempoEspL);

    digitalWrite(12, 0);
        delay(tempoInt);
    digitalWrite(10, 0);
      delay(tempoEspL);

    digitalWrite(12, 1);
        delay(tempoInt);
    digitalWrite(10, 1);
        delay(tempoInt);
    digitalWrite(8, 1);
      delay(tempoEspL);

    digitalWrite(12, 0);
        delay(tempoInt);
    digitalWrite(10, 0);
        delay(tempoInt);
    digitalWrite(8, 0);
      delay(tempoEspL);

    digitalWrite(12, 1);
        delay(tempoInt);
    digitalWrite(10, 1);
        delay(tempoInt);
    digitalWrite(8, 1);
        delay(tempoInt);
    digitalWrite(7, 1);
      delay(tempoEspL);
    
    digitalWrite(12, 0);
        delay(tempoInt);
    digitalWrite(10, 0);
        delay(tempoInt);
    digitalWrite(8, 0);
        delay(tempoInt);
    digitalWrite(7, 0);
      delay(tempoEspL);

    digitalWrite(12, 1);
        delay(tempoInt);
    digitalWrite(10, 1);
        delay(tempoInt);
    digitalWrite(8, 1);
        delay(tempoInt);
    digitalWrite(7, 1);
        delay(tempoInt);
    digitalWrite(5, 1);
      delay(tempoEspL);

    digitalWrite(12, 0);
        delay(tempoInt);
    digitalWrite(10, 0);
        delay(tempoInt);
    digitalWrite(8, 0);
        delay(tempoInt);
    digitalWrite(7, 0);
        delay(tempoInt);
    digitalWrite(5, 0);
      delay(tempoEspL);    
/*
    digitalWrite(12, 1);
      delay(tempoEspL);
    
    digitalWrite(10, 1);
        delay(tempoEspL);

    digitalWrite(8, 1);
      delay(tempoEspL);

    digitalWrite(7, 1);
        delay(tempoEspL);

    digitalWrite(5, 1);
      delay(tempoEspL);
  

    // Desligando os LED's
    digitalWrite(12, 0);
      delay(tempoEspL);
    
    digitalWrite(10, 0);
        delay(tempoEspL);

    digitalWrite(8, 0);
      delay(tempoEspL);
      
    digitalWrite(7, 0);
      delay(tempoEspL);

    digitalWrite(5, 0);
      delay(tempoEspL);


    // Ligando na ordem inversa
    digitalWrite(5, 1);
      delay(tempoEspL);
    
    digitalWrite(7, 1);
        delay(tempoEspL);

    digitalWrite(8, 1);
      delay(tempoEspL);

    digitalWrite(10, 1);
        delay(tempoEspL);

    digitalWrite(12, 1);
      delay(tempoEspL);
      

    // Desligando na ordem inversa
    digitalWrite(5, 0);
      delay(tempoEspL);

    digitalWrite(7, 0);
      delay(tempoEspL);

    digitalWrite(8, 0);
      delay(tempoEspL);
    
    digitalWrite(10, 0);
      delay(tempoEspL);
    
    digitalWrite(12, 0);
      delay(tempoEspL);

    */
  

/*

*/


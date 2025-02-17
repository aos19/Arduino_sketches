// Definições
#define LED_Vermelho 2
#define LED_Verde 4
#define LED_Azul 6

// Variáveis de tempo de espera
    int tempoEspera = 130;
    int tempoInt = 200;

// Função para ligar o led vermelho três vezes
void sequencia_ligar_vermelho_3x() {
    for (int c = 0; c <= 1; c++) {
      digitalWrite(LED_Vermelho,  1);
        delay(tempoEspera);
      digitalWrite(LED_Vermelho, 0);
        delay(tempoEspera);
      digitalWrite(LED_Vermelho,  1);
        delay(tempoEspera);
      digitalWrite(LED_Vermelho, 0);
    }
}

// Função para ligar o led verde três vezes
void sequencia_ligar_verde_3x() {
  for (int i = 0; i <= 1; i++) {
      digitalWrite(LED_Verde,  1);
        delay(tempoEspera);
      digitalWrite(LED_Verde, 0);
        delay(tempoEspera);
      digitalWrite(LED_Verde,  1);
        delay(tempoEspera);
      digitalWrite(LED_Verde, 0);
    }
}

// Função para ligar o led azul três vezes
void sequencia_ligar_azul_3x() {
  for (int a = 0; a <= 1; a++) {
      digitalWrite(LED_Azul,  1);
        delay(tempoEspera);
      digitalWrite(LED_Azul, 0);
        delay(tempoEspera);
      digitalWrite(LED_Azul, 1);
        delay(tempoEspera);
      digitalWrite(LED_Azul, 0);
    }
}

// Configuração
  void setup() {
    pinMode(LED_Vermelho, OUTPUT);
    pinMode(LED_Verde, OUTPUT);
    pinMode(LED_Azul, OUTPUT);
}

void loop() {
   sequencia_ligar_vermelho_3x();
   delay(tempoInt);
   sequencia_ligar_verde_3x();
   delay(tempoInt);
   sequencia_ligar_azul_3x();
   delay(tempoInt);
}

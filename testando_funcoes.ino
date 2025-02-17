// Definições
#define LED_Vermelho 2
#define LED_Verde 4
#define LED_Azul 6

// Variáveis de tempo de espera
int tempoEspera = 200;
int tempoInt = 700;

// Função para ligar o led vermelho três vezes
void sequencia_ligar_vermelho_3x(void) {
    for (int c = 0; c <= 3; c++) {
      digitalWrite(LED_Vermelho,  1);
      delay(tempoEspera);
      digitalWrite(LED_Vermelho, 0);
    }
}

// Função para ligar o led verde três vezes
void sequencia_ligar_verde_3x(void) {
  for (int i = 0; i <= 3; i++) {
      digitalWrite(LED_Verde,  1);
      delay(tempoEspera);
      digitalWrite(LED_Verde, 0);
    }
}

// Função para ligar o led azul três vezes
void sequencia_ligar_azul_3x(void) {
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

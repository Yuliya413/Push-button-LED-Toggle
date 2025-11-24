int pulsador = 2; // Pin del pulsador
int led = 3; // Pin del LED
int estado = LOW;

void setup() {
  pinMode(pulsador, INPUT); // Configurar el pin del pulsador como entrada
  pinMode(led, OUTPUT); // Configurar el pin del LED como salida
}

void loop() {
  	while (digitalRead(pulsador)== LOW){} // Si se presiona el pulsador
  	estado = digitalRead(led);
    digitalWrite(led, !estado); // Enciende el LED
    while (digitalRead(pulsador)== HIGH){} 
  	estado = digitalRead(led);
  	digitalWrite(led, estado); // Apagar el LED
  
}

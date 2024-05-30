void setup(){
 // Inicializar la comunicación en serie:
  Serial.begin(9600);
  pinMode(10, INPUT); // Configuración para la detección LO +
  pinMode(11, INPUT); // Configuración para la detección LO -
}
void loop() {
if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
Serial.println('!');
}
else{
unsigned long startTime = millis(); // tiempo inicial
  unsigned long elapsedTime = 0; // tiempo transcurrido
  
  while (elapsedTime <= 60000) { // muestrea durante 1 minuto
    // Leer datos del sensor (por ejemplo, un valor analógico)
    int sensorValue = analogRead(A0);
  
    // Enviar los datos a través del puerto serial
    Serial.println(sensorValue);

    // Esperar un breve tiempo antes de tomar otra lectura
    //delay(1); // Ajusta el tiempo de espera según sea necesario
    
    // Actualizar el tiempo transcurrido
    elapsedTime = millis() - startTime;
  }
}
}

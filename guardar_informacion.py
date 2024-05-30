import serial

# Configuración del puerto serial
ser = serial.Serial('COM3', 9600)  # Cambia 'COM3' al puerto serial correcto
archivo = open('datos_sensor.txt', 'w')  # Abre un archivo para escritura o se crea

try:
    for _ in range(60000):
        # Leer datos del puerto serial
        dato = ser.readline().strip().decode('utf-8')
        
        # Escribir datos en el archivo de texto
        archivo.write(dato + '\n')
except KeyboardInterrupt:
    archivo.close()
    ser.close()
    print("Proceso interrumpido, archivo cerrado y puerto serial desconectado.")

Fs = 1000;  % Frecuencia de muestreo (Hz)
Ts = 1 / Fs; % Periodo de muestreo (s)
x = load("datos_sensorf.txt");

t = 0:Ts:(length(x) - 1) * Ts; % Genera el vector de tiempo

% Gráfico de ECG
figure;
plot(t, x); 
xlabel('Tiempo (s)');
ylabel('Datos');
title('Gráfico de ECG');

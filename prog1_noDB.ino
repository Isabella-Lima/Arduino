int objeto = 0;
int sensor = 7;

void setup(){
pinMode (sensor, INPUT);
Serial.begin (9600);
}

void loop(){
objeto = digitalRead(sensor);

if (objeto == 0){
Serial.println ("Vaga Ocupada");
delay(1000);
}
else {
Serial.println ("Vaga Livre");
  delay(1000);
}

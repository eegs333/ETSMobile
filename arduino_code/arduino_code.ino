#include <SoftwareSerial.h>                   // libreria para la comunicacion
#include <Wire.h>                             // libreria para I2C
#include <Adafruit_MLX90614.h>                // libreria para el sensor de temperatura
 
Adafruit_MLX90614 mlx = Adafruit_MLX90614();    
    
void setup()  
{
  Serial.begin(9600);            // Start hardware Serial  
  mlx.begin();  
}  
  
void loop()  
{  
  char c; 
  if(Serial.available())
  {
    c = Serial.read();
    if(c=='t')
    {
      Serial.print(" "); 
      Serial.println(mlx.readAmbientTempC()); 
      delay(2000);
  
    }
  } 
  
  Serial.print(" "); 
  Serial.println(mlx.readObjectTempC());  
  delay(500);
}  

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
 // Serial.print("Ambiente = ");
 // Serial.println(mlx.readAmbientTempC()); 
 // Serial.print("ºC\tObjeto = "); 
  Serial.println(mlx.readObjectTempC()); 
//  Serial.println("ºC");
  delay(500);
}  

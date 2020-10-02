
 
void setup() {
 
pinMode (13,OUTPUT);//CONFIGURACION DEL PIN 13= VERDE

pinMode (12,OUTPUT);//CONFIGURACION DEL PIN 12= AMARILLO

pinMode (11,OUTPUT);//CONFIGURACION DEL PIN 11= ROJO

pinMode (10,OUTPUT);//CONFIGURACION DEL PIN 10= VERDE

pinMode (9,OUTPUT);//CONFIGURACION DEL PIN 9= AMARILLO
 
pinMode (8,OUTPUT);//CONFIGURACION DEL PIN 8=ROJO
}
 

void loop() {
 
  digitalWrite (13,HIGH);//ESCRITURA DEL PIN 13 EN ALTO

   digitalWrite (12,LOW);
    
    digitalWrite (11,LOW);
     
  digitalWrite (10,LOW);
   
    digitalWrite (9,LOW);
    
      digitalWrite (8,HIGH);
      
  delay(7000);
   
  digitalWrite (9,LOW);
   
  digitalWrite (12,HIGH);
   
  delay(1000);
   
  digitalWrite (13,LOW);//ESCRITURA DEL PIN 13 EN BAJO
 
   digitalWrite (12,LOW);
    
    digitalWrite (11,HIGH);
     
  digitalWrite (10,HIGH);
   
    digitalWrite (9,LOW);
     
      digitalWrite (8,LOW);
       
  delay(7000);
   
  digitalWrite (9,HIGH);
   
  digitalWrite (12,LOW);
   
  delay(1000);
  
}



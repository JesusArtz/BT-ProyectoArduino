void setup() {
  Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 
 

}

void loop() {
  if(Serial.available()){
    char dato=Serial.read();
    if(dato=='a'){
      digitalWrite(13,LOW);
      Serial.print(dato);
    }
    if(dato=='b'){
      digitalWrite(13,HIGH);     
      Serial.print(dato);
    }
    
    if(dato=='c'){
      digitalWrite(12,LOW);
      Serial.print(dato);
    }
    if(dato=='d'){
      digitalWrite(12,HIGH);     
      Serial.print(dato);
    }
    
    if(dato=='e'){
      digitalWrite(11,LOW);
      Serial.print(dato);
    }
    if(dato=='f'){
      digitalWrite(11,HIGH);     
      Serial.print(dato);
    }
    
    
  }
  

}

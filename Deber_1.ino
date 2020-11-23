/*
 * UNIVERSIDAD TÉCNICA DEL NORTE
 * FACULTAD DE INGENIERÍA EN CIENCIAS APLICADAS
 * SISTEMAS EMBEBIDOS 
 * 5to Nivel
 * STEVEN FLORES
 * CAPÍTULO II: PUERTOS DIGITALES
 * Deber 1 : Juego mediante switchs
 */
 const int A= 8; // pin 8 conectado a led
 const int B= 9; // pin 9 conectado a led
 const int C=10; // pin 10 conectado a led
 const int D=11; // pin 11 conectado a led
 const int E=12; // pin 12 conectado a led
 const int F=13; // pin 13 conectado a led

 const int sw1=4; //pin 4 configurado como 1 switch
 const int sw2=5; //pin 5 configurado como 2 switch
 const int sw3=6; //pin 6 configurado como 3 switch
 const int sw4=7; //pin 7 configurado como 4 switch
 
 int i=0; //variable de juego 1
 int j=0; //variable de juego 2
 int k=0; //variable de juego 3
 int l=0; //variable de juego 4
void setup(){
  pinMode(A,OUTPUT); // pin8 declarado como salida
  pinMode(B,OUTPUT); // pin9 declarado como salida
  pinMode(C,OUTPUT); // pin10 declarado como salida
  pinMode(D,OUTPUT); // pin11 declarado como salida
  pinMode(E,OUTPUT); // pin12 declarado como salida
  pinMode(F,OUTPUT); // pin13 declarado como salida
  
  pinMode(sw1,INPUT); // pin 4 declarado como entrada
  pinMode(sw2,INPUT); // pin 4 declarado como entrada
  pinMode(sw3,INPUT); // pin 4 declarado como entrada
  pinMode(sw4,INPUT); // pin 4 declarado como entrada
  
}

void loop() {
  //JUEGO 1
  if(digitalRead(sw1)==HIGH && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW  ){ // Condición exclusiva del primer juego. Activación solo con el primer switch
    if(i<10){    // Factor de repetición de encendido leds pares
      digitalWrite(A,HIGH),digitalWrite(C,HIGH),digitalWrite(E,HIGH); //Encendido leds
      delay(500);
      digitalWrite(A,LOW),digitalWrite(C,LOW),digitalWrite(E,LOW); //Apagado leds
      delay(500);
      i++; //i=i+1
    }
  }
  // JUEGO 2
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==HIGH && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW  ){ // Condición exclusiva del segundo juego. Activación solo con el segundo switch
    if(j<10){    // Factor de repetición de encendido leds impares
      digitalWrite(B,HIGH),digitalWrite(D,HIGH),digitalWrite(F,HIGH); //Encendido leds
      delay(500);
      digitalWrite(B,LOW),digitalWrite(D,LOW),digitalWrite(F,LOW); //Apagado leds
      delay(500);
      j++; 
    }
  }
  // JUEGO 3
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==HIGH && digitalRead(sw4)==LOW  ){ // Condición exclusiva del segundo juego. Activación solo con el segundo switch
    if(k<1){    
      digitalWrite(F,HIGH); //Encendido led 1
      delay(200);
      digitalWrite(E,HIGH); //Encendido led 2
      delay(200);
      digitalWrite(D,HIGH); //Encendido led 3
      delay(200);
      digitalWrite(C,HIGH); //Encendido led 4
      delay(200);
      digitalWrite(B,HIGH); //Encendido led 5
      delay(200);
      digitalWrite(A,HIGH); //Encendido led 6
      delay(200);
      digitalWrite(A,LOW),digitalWrite(B,LOW),digitalWrite(C,LOW),digitalWrite(D,LOW),digitalWrite(E,LOW),digitalWrite(F,LOW); //Apagado todos los leds
      k++; 
    }
  }
  //JUEGO $
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==HIGH  ){ // Condición exclusiva del segundo juego. Activación solo con el segundo switch
    if(l<10){    // Factor de repetición
      digitalWrite(F,HIGH); //Encendido led 1
      delay(25);
      digitalWrite(F,LOW); //Apagado led 1
      delay(25);
      digitalWrite(E,HIGH); //Encendido led 2
      delay(25);
      digitalWrite(E,LOW);//Apagado led 2
      delay(25);
      digitalWrite(D,HIGH); //Encendido led 3
      delay(25);
      digitalWrite(D,LOW);//Apagado led 3
      delay(25);
      digitalWrite(C,HIGH); //Encendido led 4
      delay(25);
      digitalWrite(C,LOW); //Apagado led 4
      delay(25);
      digitalWrite(B,HIGH); //Encendido led 5
      delay(25);
      digitalWrite(B,LOW); //Apagado led 5
      delay(25);
      digitalWrite(A,HIGH); //Encendido led 6
      delay(25);
      digitalWrite(A,LOW); //Apagado led 6
      l++; 
    }
  }
}
 

/*
 * UNIVERSIDAD TÉCNICA DEL NORTE
 * FACULTAD DE INGENIERÍA EN CIENCIAS APLICADAS
 * SISTEMAS EMBEBIDOS 
 * 5to Nivel
 * STEVEN FLORES
 * CAPÍTULO II: PUERTOS DIGITALES
 * Deber 2 : Impresión números primos hasta el 99
 */
 const int A= 8; // pin 8 conectado a decodificador
 const int B= 9; // pin 9 conectado a decodificador
 const int C=10; // pin 10 conectado a decodificador
 const int D=11; // pin 11 conectado a decodificador
 const int dis1=12; // pin de activación display unidades
 const int dis2=13; // pin de activación display decenas
 const int boton=7; //pin 7 configurado como entrada
 int i=0;
 int aux=0;
 int uni=0;
 int dec=0;
 int cont=1; //variable de conteo a observar
 bool primo = true;
void setup(){
  pinMode(A,OUTPUT); // pin8 declarado como salida
  pinMode(B,OUTPUT); // pin9 declarado como salida
  pinMode(C,OUTPUT); // pin10 declarado como salida
  pinMode(D,OUTPUT); // pin11 declarado como salida
  pinMode(dis1,OUTPUT); // pin11 declarado como salida
  pinMode(dis2,OUTPUT); // pin11 declarado como salida
  pinMode(boton,INPUT); // pin11 declarado como entrada
}

void loop(){




  
if(digitalRead(boton)==LOW){ // condición que active el sw en alto
  delay(200);                 // delay anti-rebotes
 do{
  if(cont<100){               // conteo máximo a visualizar
    cont++;                //incremento de variable 
    bool primo = true;
      for (int i=2;i < cont;i++){
        if(cont % i == 0){ 
        primo = false;
        }
      }
   
    if(primo == false){
    }else{
      aux=cont;
      }
      
    if(aux<10){              // condición de unidades
      uni=aux;               //asignación a variable unidad
      }else{                   // condición para variables de decenas y unidades
       dec=aux/10;           //asignar número de decenas a variable adecuada
       uni=aux-dec*10;       //asignar número de unidades a variable adecuada
      } 
    }
    else{                      //concidición límite de conteo 
    cont=1;                   // reinicio de variable
    uni=0;
    dec=0;
    }
 }while (aux != cont);
 
  }
  digitalWrite(dis1,HIGH);    //enceder display unidades
  digitalWrite(dis2,LOW);     //apagar display decenas
  segmentos(dec);             //llamar a método para visualizar número
  delay(20);                 //tiempo de visualización
  digitalWrite(dis1,LOW);     //apagar display unidades
  digitalWrite(dis2,HIGH);    //encender display decenas
  segmentos(uni);             //llamar a método para visualizar número
  delay(20);                 //tiempo de visualización   
}
 
void segmentos (int i){
   switch(i){
        case 0:
          digitalWrite(A,LOW); //Envía 0 voltios a pin 8
          digitalWrite(B,LOW); //Envía 0 voltios a pin 9
          digitalWrite(C,LOW); //Envía 0 voltios a pin 10
          digitalWrite(D,LOW); //Envía 0 voltios a pin 11
        break;
        case 1:
          digitalWrite(A,HIGH); //Envía 5 voltios a pin 8
          digitalWrite(B,LOW);  //Envía 0 voltios a pin 9
          digitalWrite(C,LOW);  //Envía 0 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 2:
          digitalWrite(A,LOW);  //Envía 0 voltios a pin 8
          digitalWrite(B,HIGH); //Envía 5 voltios a pin 9
          digitalWrite(C,LOW);  //Envía 0 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 3:
          digitalWrite(A,HIGH); //Envía 5 voltios a pin 8
          digitalWrite(B,HIGH); //Envía 5 voltios a pin 9
          digitalWrite(C,LOW);  //Envía 0 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 4:
          digitalWrite(A,LOW);  //Envía 0 voltios a pin 8
          digitalWrite(B,LOW);  //Envía 0 voltios a pin 9
          digitalWrite(C,HIGH); //Envía 5 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 5:
          digitalWrite(A,HIGH); //Envía 5 voltios a pin 8
          digitalWrite(B,LOW);  //Envía 0 voltios a pin 9
          digitalWrite(C,HIGH); //Envía 5 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 6:
          digitalWrite(A,LOW);  //Envía 0 voltios a pin 8
          digitalWrite(B,HIGH); //Envía 5 voltios a pin 9
          digitalWrite(C,HIGH); //Envía 5 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 7:
          digitalWrite(A,HIGH); //Envía 5 voltios a pin 8
          digitalWrite(B,HIGH); //Envía 5 voltios a pin 9
          digitalWrite(C,HIGH); //Envía 5 voltios a pin 10
          digitalWrite(D,LOW);  //Envía 0 voltios a pin 11
        break;
        case 8:
          digitalWrite(A,LOW); //Envía 0 voltios a pin 8
          digitalWrite(B,LOW); //Envía 0 voltios a pin 9
          digitalWrite(C,LOW); //Envía 0 voltios a pin 10
          digitalWrite(D,HIGH); //Envía 5 voltios a pin 11
        break;
        case 9:
          digitalWrite(A,HIGH); //Envía 5 voltios a pin 8
          digitalWrite(B,LOW);  //Envía 0 voltios a pin 9
          digitalWrite(C,LOW);  //Envía 0 voltios a pin 10
          digitalWrite(D,HIGH); //Envía 5 voltios a pin 11
        break;
      }
  }

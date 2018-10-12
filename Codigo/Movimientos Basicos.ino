//EXPO ROBOTICA 2018 
//GRUBB 2018

#include <Servo.h>
Servo M1;
Servo M2;
Servo M3;
Servo M4;


  int Motores[4];   //= {M1,M2,M3,M4}

  //////Movimientos//////

  int adelante[]  = {180,180,180,180};
  int atras[]     = {0,0,0,0};
  int derecha []  = {0,180,0,180};
  int izquierda[] = {180,0,180,0};
  int gHorario[]  = {180,0,0,180};
  int gCHorario[] = {0,180,180,0};
  int parar[]     = {90,90,90,90};

  //////Configuracion Arduino//////

void setup(){


  //////Pines Motores//////

  M1.attach(2);
  M2.attach(3);
  M3.attach(4);
  M4.attach(5);

}

void loop(){

Adelante_();
Atras_();
Derecha_();
Izquierda_();
GHorario_();
GCHorario_();
Parar_();

}


  //////Funciones de Movimiento//////

void Adelante_(){
  M1.write(adelante[0]);
  M2.write(adelante[1]);
  M3.write(adelante[2]);
  M4.write(adelante[3]);
  delay(1500);
}

void Atras_(){
  M1.write(atras[0]);
  M2.write(atras[1]);
  M3.write(atras[2]);
  M4.write(atras[3]);
  delay(1500);
}

void Derecha_(){
  M1.write(derecha[0]);
  M2.write(derecha[1]);
  M3.write(derecha[2]);
  M4.write(derecha[3]);
  delay(1500);
}

void Izquierda_(){
  M1.write(izquierda[0]);
  M2.write(izquierda[1]);
  M3.write(izquierda[2]);
  M4.write(izquierda[3]);
  delay(1500);
}

void GHorario_(){
  M1.write(gHorario[0]);
  M2.write(gHorario[1]);
  M3.write(gHorario[2]);
  M4.write(gHorario[3]);
  delay(1500);
}

void GCHorario_(){
  M1.write(gCHorario[0]);
  M2.write(gCHorario[1]);
  M3.write(gCHorario[2]);
  M4.write(gCHorario[3]);
  delay(1500);
}

void Parar_(){

  M1.write(parar[0]);
  M2.write(parar[1]);
  M3.write(parar[2]);
  M4.write(parar[3]);
  delay(1500);
}

#include "RGBled.h"
RGBled::RGBled(bool sure){
  msg=sure;
}
void RGBled::begin(int boad,int r,int g,int b){
  R=r;
  G=g;
  B=b;
  if(msg==1){
    Serial.println("RGB led library");
    Serial.println("by amirmahdi esmailzadeh");
    Serial.print("boad rate: ");
    Serial.println(boad);
    Serial.print("red pin: ");
    Serial.println(R);
    Serial.print("green pin: ");
    Serial.println(G);
    Serial.print("blue pin: ");
    Serial.println(B);        
  }
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  digitalWrite(R,1);
  digitalWrite(G,1);
  digitalWrite(B,1);
}
void RGBled::setcolor(String color){
  if(color=="red"){
    digitalWrite(R,0);
  }
  if(color=="green"){
    digitalWrite(G,0);
  }
  if(color=="blue"){
    digitalWrite(B,0);
  }if(color=="yellow"){
    digitalWrite(B,0);
    digitalWrite(G,0);
  }if(color=="purple"){
    digitalWrite(R,0);
    digitalWrite(B,0);
  }if(color=="white"){
    digitalWrite(R,0);
    digitalWrite(G,0);
    digitalWrite(B,0);
  }if(color=="orange"){
    digitalWrite(R,0);
    analogWrite(B,100);
    analogWrite(B,100);
  }
  if(msg==1){
    Serial.print("now the led color should be ");
    Serial.println(color);
  }
}
void RGBled::rgbcolor(int r,int g,int b){
  analogWrite(R,r);
  analogWrite(G,g);
  analogWrite(B,b);
  if(msg==1){
    Serial.println("now the led color should be");
    Serial.print("red: ");
    Serial.print(r);
    Serial.print("\tgreen: ");
    Serial.print(g);
    Serial.print("\tblue: ");
    Serial.print(b);
  }
}

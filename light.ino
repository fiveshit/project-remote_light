#include <SoftwareSerial.h>
#define light 12
SoftwareSerial myBT(7, 8); // Pin 10 for Receive, Pin 9 for Send
char chrRecv;              // 暫存收到的訊息
void setup() {
  Serial.begin(9600);
  Serial.print("BT is Ready");
  myBT.begin(9600);
  pinMode(light,OUTPUT);
}

void loop() {
  if (Serial.available())
  {
    chrRecv = Serial.read(); 
    myBT.print(chrRecv);   
  }

  if (myBT.available()) 
  {
    chrRecv = myBT.read(); 
    Serial.print(chrRecv); 
    if(chrRecv == 0x40)
    {
        Serial.print("open");
        digitalWrite(light,HIGH);
    }
    if(chrRecv == 0x50)
    {
     digitalWrite(light,LOW);
    }
  }
}

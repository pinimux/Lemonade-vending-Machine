#define DIS1    29//Вода
#define DIS2    28//Мята
#define DIS3    27//Апельсин
#define BUT1    48
#define BUT2    49
#define BUT3    37
#define BUT4    36
#define BUT5    35
#define BUT6    34
#define BUT_ST  33
#define PAUSE   32
#define SENSOR  A8
#define M1      6
#define M2      7 
#define SENSOR2 25
int zakaz[]={0,0,0,0};
int i=0;
int nal;
bool zakazs=true;
bool naliv=false;
bool vidacha=false;
int sp_bez_zid=100;
int sp_s_zid=90;
/////
///// 1 -- Газированная вода
///// 2 -- Мятный сироп
///// 3 -- Апельсиновый сок
///// 4 -- Лимонад “Мятный”
///// 5 -- Лимонад “Заводной апельсин”
///// 6 -- Лимонад ‘Тройной”
/////
void nal1(){
  while(digitalRead(SENSOR1) != 1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_1");
  for (int t=0; t<50; t++) {//VODA
    digitalWrite(DIS1,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS1,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS1,HIGH);
  }
  digitalWrite(DIS1, LOW);
  delay(1000);
}
void nal2(){
  while(digitalRead(SENSOR1) !=1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_2");
  for (int t=0; t<10; t++) {//MYATA
    digitalWrite(DIS2,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS2,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS2,HIGH);
  }
  digitalWrite(DIS2, LOW);
  delay(1000);
}
void nal3(){
  while(digitalRead(SENSOR1) !=1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_3");
  for (int t=0; t<40; t++) {//APELSIN
    digitalWrite(DIS3,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS3,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS3,HIGH);
  }
  digitalWrite(DIS3, LOW);
  delay(1000);
}
void nal4(){
  while(digitalRead(SENSOR1) !=1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_4");
  for (int t=0; t<80; t++) {//VODA
    digitalWrite(DIS1,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS1,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS1,HIGH);
  }
  digitalWrite(DIS1, LOW);
  delay(1000);
  for (int t=0; t<20; t++) {//MYATA
    digitalWrite(DIS2,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS2,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS2,HIGH);
  }
  digitalWrite(DIS2,LOW);
}
void nal5(){
  while(digitalRead(SENSOR1) !=1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_5");
  for (int t=0; t<30; t++) {//VODA
    digitalWrite(DIS1,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS1,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS1,HIGH);
  }
  digitalWrite(DIS1, LOW);
  delay(1000);
  for (int t=0; t<50; t++) {//APELSIN
    digitalWrite(DIS3,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS3,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS3,HIGH);
  }
  digitalWrite(DIS3,LOW);
}
void nal6(){
  while(digitalRead(SENSOR1) !=1){
      analogWrite(M1, sp_s_zid);
      delay(100);
    }
    digitalWrite(M1,LOW);
    Serial.print("Naliv_4");
  for (int t=0; t<35; t++) {//VODA
    digitalWrite(DIS1,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS1,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS1,HIGH);
  }
  digitalWrite(DIS1, LOW);
  delay(1000);
  for (int t=0; t<10; t++) {//MYATA
    digitalWrite(DIS2,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS2,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS2,HIGH);
  }
  digitalWrite(DIS2,LOW);
  for (int t=0; t<45; t++) {//APELSIN
    digitalWrite(DIS3,HIGH);
    delay(1);
    Serial.print(".");
    while(digitalRead(SENSOR1)!=1){
      digitalWrite(DIS3,LOW);
      Serial.println("STAKANA NET");
      delay(1000);
    }
    digitalWrite(DIS3,HIGH);
  }
  digitalWrite(DIS3,LOW);
}

void setup() {
  digitalWrite(DIS1, LOW);
  digitalWrite(DIS2, LOW);
  digitalWrite(DIS3, LOW);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(DIS1, OUTPUT);
  pinMode(DIS2, OUTPUT);
  pinMode(DIS3, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMode(BUT4, INPUT_PULLUP);
  pinMode(BUT5, INPUT_PULLUP);
  pinMode(BUT6, INPUT_PULLUP);
  pinMode(BUT_ST, INPUT_PULLUP);
  pinMode(PAUSE, INPUT_PULLUP);  
  pinMode(SENSOR2,INPUT);
  Serial.begin(9600);
  Serial.println("START");
}

void loop(){
  if(zakazs==true){
    i=0;
    while(zakazs==true){
      if (not(digitalRead(BUT1))) {zakaz[i] = 1; i++; Serial.println("1 SET"); while (not(digitalRead(BUT1))) {}}
      if (not(digitalRead(BUT2))) {zakaz[i] = 2; i++; Serial.println("2 SET"); while (not(digitalRead(BUT2))) {}}
      if (not(digitalRead(BUT3))) {zakaz[i] = 3; i++; Serial.println("3 SET"); while (not(digitalRead(BUT3))) {}}
      if (not(digitalRead(BUT4))) {zakaz[i] = 4; i++; Serial.println("4 SET"); while (not(digitalRead(BUT4))) {}}
      if (not(digitalRead(BUT5))) {zakaz[i] = 5; i++; Serial.println("5 SET"); while (not(digitalRead(BUT5))) {}}
      if (not(digitalRead(BUT6))) {zakaz[i] = 6; i++; Serial.println("6 SET"); while (not(digitalRead(BUT6))) {}}
      }
      if(not(digitalRead(BUT_ST))){
        while (not(digitalRead(BUT_ST))) {}
        zakazs=false;
        naliv=true;
        Serial.println("Starting work");
      }
    }
  if(naliv==true){
    delay(100);
    for(int n=0;n<i;n++){
      switch (zakaz[n]){
        case 1:
        nal1();
        break;
        case 2:
        nal2();
        break;
        case 3:
        nal3();
        break;
        case 4:
        nal4();
        break;
        case 5:
        nal5();
        break;
        case 6:
        nal6();
        break;
      }
      analogWrite(M1,sp_s_zid);
      delay(150);
      while(digitalRead(SENSOR1)!=1){}
      digitalWrite(M1,LOW);
      Serial.println("Perehod");
    }
    naliv=false;
    vidacha=true;
  }
  if (vidacha==true){
    analogWrite(M1, sp_s_zid); // ШИМ для управления скоростью
    while(digitalRead(SENSOR2)!=0){}
    digitalWrite(M1,LOW);
    if (zakaz[1]==0){
      delay(10000);
      analogWrite(M1,sp_bez_zid);
      while(digitalRead(SENSOR1)!=1){}
      digitalWrite(M1,LOW);
      }
    else if (zakaz[2]==0){
      for(int c=0;c<1;c++){
        analogWrite(M1,sp_s_zid);
        delay(150);
        digitalWrite(M1,LOW);
      }
      delay(9000);
      analogWrite(M1,sp_bez_zid);
      while(digitalRead(SENSOR1)!=1){}
      digitalWrite(M1,LOW);
      }

    else if (zakaz[3]==0){
      for(int c=0;c<2;c++){
        analogWrite(M1,sp_s_zid);
        delay(150);
        digitalWrite(M1,LOW);
      }
      delay(9000);
      analogWrite(M1,sp_bez_zid);
      while(digitalRead(SENSOR1)!=1){}
      digitalWrite(M1,LOW);
      }
    else{
      for(int c=0;c<3;c++){
        analogWrite(M1,sp_s_zid);
        delay(150);
        digitalWrite(M1,LOW);
      }
      delay(9000);
      analogWrite(M1,sp_bez_zid);
      while(digitalRead(SENSOR1)!=1){}
      digitalWrite(M1,LOW);
      }
    vidacha=false;
    zakazs=true;
  }
}
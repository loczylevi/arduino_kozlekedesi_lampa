int keses = 1000; // villogás ideje

int piros= 10;

int sarga= 9;

int zold= 8;

 

void setup() {

  pinMode(piros, OUTPUT);

  pinMode(sarga, OUTPUT);

  pinMode(zold, OUTPUT);

}

void loop() {

  digitalWrite(piros, HIGH); // piros felkapcsolás

  delay(5000);

 
 // var

 digitalWrite(sarga, HIGH);

 delay(2000);


  digitalWrite(piros, LOW);

  digitalWrite(sarga, LOW);


 

  digitalWrite(sarga, LOW);

  digitalWrite(zold, HIGH);

  delay(6000);

 

  digitalWrite(zold, LOW);


  digitalWrite(sarga, HIGH);

  delay(3000);

  digitalWrite(sarga, LOW);

}

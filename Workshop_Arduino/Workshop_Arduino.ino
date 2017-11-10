const int buttonPin = 2;
const int ledPin1 = 7;
const int ledPin2 = 8;


int buttonState = 0;

void setup() {
  
  Serial.begin(9600);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);

}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);

  //check the pushbutton
  if (buttonState == HIGH){
    ledOff();
  }
  else{
    ledOn();
  }

}

void ledOn(){
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
}
void ledOff(){
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
}


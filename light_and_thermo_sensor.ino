//set pin numbers
//const won't change
const int ledPin = 8;   //the number of the LED pin
const int ldrPin = A0;  //the number of the LDR pin

int lightCal;
int ldrStatus;


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input

  lightCal = analogRead(ldrPin);
}

void loop() {

  ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  //check if the LDR status is <= 20
  //if it is, the LED is HIGH

   if (ldrStatus <= lightCal) {

    Serial.print("The light level is: ");
    Serial.println(ldrStatus);
    digitalWrite(ledPin, HIGH);               //turn LED on
    //Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    Serial.print("The light level is: ");
    Serial.println(ldrStatus);
    digitalWrite(ledPin, LOW);          //turn LED off
    //Serial.println("LED is OFF");
  }
}

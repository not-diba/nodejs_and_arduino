//declaring variables
const int ledPin = 7; // blue
const int ledPin2 = 6; // green
const int ledPin3 = 5; // red

int data;  // Variable to store data

void setup()
  {
  Serial.begin(9600);              //setting baud rate for communication   
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  }
  
void loop()
{
  while(Serial.available())                                 
  {
  data = Serial.read();                                      
  }
    if(data == 'r')                                                  
      {                                
      Serial.println("LED turned red");                     
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      }
    else if(data == 'g')                                          
      {                                                     
      Serial.println("LED turned greed");
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, HIGH);
      }
    else if(data == 'b')                                          
      {
      Serial.println("LED turned blue");                                 
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, LOW);
      }
    else if(data == 'y')                                          
      {
      Serial.println("LED turned yellow");                                 
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, HIGH);
      }
}

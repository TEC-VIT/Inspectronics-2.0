// 1
void setup()
{
  pinMode(13, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);	
}

// 2
int LED1 = 13;
void setup()
{
  pinMode(LED1, OUTPUT);
}
void loop()
{
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);	
}


// 3
int LED1 = 13;
void setup()
{
  pinMode(LED1, OUTPUT);
}
void loop()
{
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(1000);	
}

// 4
int LED1 = 13;
int LED2 = 8;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}
void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);	//first put this at the end then bring it up
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
}

// 5
int LED1 = 13;
int LED2 = 11;
int LED3 = 8;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, LOW);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
}

// 6
int LED1 = 13;
int LED2 = 11;
int LED3 = 8;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}


void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
}

// 7
// This starts serial communication, so that the Arduino can send out commands through the USB connection. The value 9600 is called the 'baud rate' of the connection. This is how fast the data is to be sent.
int LED1 = 13;
int LED2 = 8;
int c = 0;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.write("Inspectronics\n");
  Serial.println(c);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  c=c+5;
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  c-=1;
  delay(1000);
  Serial.println(c);
}


Serial.print(c);
Serial.println(c);

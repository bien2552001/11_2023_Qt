const int LEDPIN = 13;
String CommandString = "";
String INputData = "";
bool IS_Data = false;




void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial_Data_Events();

  if(IS_Data == true)
  {
    if(CommandString =="On")
    {
      digitalWrite(LEDPIN,HIGH);
      delay(100);
      Serial.println("LED IS ON");
    }
    else if (CommandString == "Off")
    {
      digitalWrite(LEDPIN,LOW);
      delay(100);
      Serial.println("LED IS OFF");

    }
    IS_Data = false;
    CommandString = "";
    INputData = "";
  }
}
void Serial_Data_Events()
{
  Serial.flush();
  while(Serial.available())
  {
    char inchar = (char)Serial.read();
    if(inchar == '\n')
    {
      IS_Data = true;
      CommandString = INputData;

    }
    else
    {
      INputData += inchar;
    }
  }
}
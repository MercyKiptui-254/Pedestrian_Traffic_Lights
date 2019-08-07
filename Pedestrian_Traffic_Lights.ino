//declaration:
int Red_LED=3;

int button=2;
int Button_Value=0;

void setup() {
  // put your setup code here, to run once:
pinMode( Red_LED,OUTPUT);

pinMode( button,INPUT);

digitalWrite(Red_LED, HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Red_LED, HIGH);// the lights show STOP until a pedestrian asks for it)
Button_Value=digitalRead(button);

if(Button_Value==1){
digitalWrite(Red_LED, LOW);
delay(3000);
}

else
{
digitalWrite(Red_LED, HIGH);
}
}

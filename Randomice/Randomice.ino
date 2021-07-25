int dice=0;

void setup() 
{
  Serial.begin(9600);
  srand(analogRead(A0));

  DDRB|=0x3f;
  DDRD|=0xff;


}

long ps=0;
void loop() {
  dice=(rand()%6)+1;
  Serial.println(dice);
  driveLEDs(dice);
  driveSSD(dice);

  delay(1000);
  srand(analogRead(A0));
}

void driveLEDs(byte x)
{
  switch(x)
  {
    case 1: PORTB=0x01;
            break;
    case 2: PORTB=0x03;
            break;
    case 3: PORTB=0x07;
            break;
    case 4: PORTB=0x0f;
            break;
    case 5: PORTB=0x1f;
            break;
    case 6: PORTB=0x3f;
            break;
    default : PORTB|=0x00;
              break;
  }
}

void driveSSD(byte x)
{
  switch(x)
  {
    case 1: PORTD=0x06;
            break;
    case 2: PORTD=0x5b;
            break;
    case 3: PORTD=0x4f;
            break;
    case 4: PORTD=0x66;
            break;
    case 5: PORTD=0x6d;
            break;
    case 6: PORTD=0x7d;
            break;
    default : PORTD|=0x00;
              break;
  }

}

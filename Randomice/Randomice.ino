int dice=0;

void setup() 
{
  Serial.begin(115200);
  srand(analogRead(A0));
  DDRB|=0x3f;  
}

long ps=0;
void loop() {  
  dice=(rand()%6)+1;
  Serial.println(dice);
}


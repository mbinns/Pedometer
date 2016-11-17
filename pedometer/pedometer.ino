
#define XPIN P1_3
#define YPIN P1_4
#define ZPIN P1_5

int Xread;
int Yread;
int Zread;
int flag;
int offset;
int steps;

void setup() {
  Serial.begin(9600);
  offset = 2400;
  steps = 0;
  flag = 0;

  pinMode(RED_LED,OUTPUT);
}

void loop() {
  Xread = analogRead(XPIN)-offset;
  Yread = analogRead(YPIN)-offset;
  Zread = analogRead(ZPIN)-offset;

  count();

}

void count()
{
    if(Yread >= 400 && flag == 0)
    {
        flag = 1;
        digitalWrite(RED_LED,HIGH);
        steps++;
        Serial.println(steps);
    }else if(Yread < 200 && flag == 1)
    {
        flag = 0;
        digitalWrite(RED_LED,LOW);
    }
    
}

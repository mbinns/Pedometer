
#define XPIN P1_3
#define YPIN P1_4
#define ZPIN P1_5

int Xread;
int Yread;
int Zread;

int offset;
int steps=0;

void setup() {
  Serial.begin(9600);
  offset = 2400;
  steps = 0;
}

void loop() {
  Xread = analogRead(XPIN)-offset;
  Yread = analogRead(YPIN)-offset;
  Zread = analogRead(ZPIN)-offset;

  count();

//  Serial.print(Xread);
//  Serial.print(",");
//  Serial.print(Yread);
//  Serial.print(",");
//  Serial.println(Zread);
//  Serial.print(",");
//  Serial.println(avg);
  Serial.println(steps);

}

void count()
{
    if(Yread >= 300)
    {
        steps++;
    }
}

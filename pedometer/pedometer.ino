
#define XPIN P1_3
#define YPIN P1_4
#define ZPIN P1_5

int Xread;
int Yread;
int Zread;

int offset;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int Xread = analogRead(XPIN)-offset;
  int Yread = analogRead(YPIN)-offset;
  int Zread = analogRead(ZPIN)-offset;

  Serial.print(Xread);
  Serial.print(",");
  Serial.print(Yread);
  Serial.print(",");
  Serial.println(Zread);
//  Serial.print(",");
//  Serial.println(avg);
  
}
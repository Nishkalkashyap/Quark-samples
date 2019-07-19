
int dataPoint1 = 0;
int dataPoint2 = 0;
int dataPoint3 = 0;
int dataPoint4 = 0;

void setup()
{
    Serial.begin(115200);
  // put your setup code here, to run once:
}

void loop()
{
  dataPoint1 = random(100, 200);
  dataPoint2 = random(100, 200);
  dataPoint3 = random(100, 200);
  dataPoint4 = random(100, 200);
  Serial.print(dataPoint1);
  Serial.print(",");
  
  Serial.print(dataPoint2);
  Serial.print(",");

  Serial.print(dataPoint3);
  Serial.print(",");

  Serial.println(dataPoint4);
  delay(1000);
}

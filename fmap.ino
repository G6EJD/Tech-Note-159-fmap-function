void setup() {
  Serial.begin(115200);
  delay(200);
}

void loop() {
  float Reading = fmap(0.175, 0, 1, 0, 100);
  Serial.println(Reading);
  Serial.println();
  for (float sensor_reading = 0; sensor_reading <= 1.1; sensor_reading += 0.1){
    Reading = fmap(sensor_reading, 0, 1, 0, 100);
    Serial.println(String(Reading, 1) + "%");
  }
  delay(10000);
}

double fmap(double x, double in_min, double in_max, double out_min, double out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

/* Results
17.50

0.0%
10.0%
20.0%
30.0%
40.0%
50.0%
60.0%
70.0%
80.0%
90.0%
100.0%

*/

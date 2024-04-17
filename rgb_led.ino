
#define RED_LED_PIN     11
#define GREEN_LED_PIN   10
#define BLUE_LED_PIN    9

#define RED_INPUT       A0
#define GREEN_INPUT     A1
#define BLUE_INPUT      A2

uint16_t red = 0;
uint16_t green = 0;
uint16_t blue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);

}

void loop() {
  red = analogRead(RED_INPUT);
  green = analogRead(GREEN_INPUT);
  blue = analogRead(BLUE_INPUT);  
  analogWrite(RED_LED_PIN, red >>2);
  analogWrite(GREEN_LED_PIN, green >>2);
  analogWrite(BLUE_LED_PIN, blue >>2);
  Serial.print("red: ");
  Serial.print(red);
  Serial.print("\n");
  Serial.print("green: ");
  Serial.print(green);
  Serial.print("\n");
  Serial.print("blue: ");
  Serial.print(blue);
  Serial.print("\n");
}

int a= 10;
int b= 2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

int x = a+b;
int y= a-b;
int z= a*b;

Serial.println(x);
Serial.println(y);
Serial.println(z);
}

void loop() {
  // put your main code here, to run repeatedly:

}

int Temperature= 50;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

if (Temperature>30){
  Serial.println("Hot");
}else{
  Serial.println("Cool");
}
}

void loop() {
  // put your main code here, to run repeatedly:

}

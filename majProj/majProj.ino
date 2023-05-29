const int relayPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
}

void loop() {
  // Check if there is data available to read
  if (Serial.available()) {
    // Read the incoming data as a string
    String receivedString = Serial.readString();

    // Print the received string
    Serial.println("Received String: " + receivedString);
    if(receivedString[0]=='R'  && receivedString[1]=='O')
    {
      String s=receivedString.substring(3,5);
      int x=s.toInt();
      Serial.println(x);
      digitalWrite(relayPin, LOW);
      delay(x*1000);
      digitalWrite(relayPin, HIGH);
    }
    Serial.flush();
  }
}
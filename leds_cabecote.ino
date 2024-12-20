const int ledPins[6] = {3, 5, 6, 9, 10, 11}; 

const byte braille[26][6] = {
  {0, 0, 0, 1, 0, 0}, // A
  {0, 0, 0, 1, 1, 0}, // B
  {1, 0, 0, 1, 0, 0}, // C
  {1, 1, 0, 1, 0, 0}, // D
  {0, 1, 0, 1, 0, 0}, // E
  {1, 0, 0, 1, 1, 0}, // F
  {1, 1, 0, 1, 1, 0}, // G
  {0, 1, 0, 1, 1, 0}, // H
  {1, 0, 0, 0, 1, 0}, // I
  {1, 1, 0, 0, 1, 0}, // J
  {0, 0, 0, 1, 0, 1}, // K
  {0, 0, 0, 1, 1, 1}, // L
  {1, 0, 0, 1, 0, 1}, // M
  {1, 1, 0, 1, 0, 1}, // N
  {0, 1, 0, 1, 0, 1}, // O
  {1, 0, 0, 1, 1, 1}, // P
  {1, 1, 0, 1, 1, 1}, // Q
  {0, 1, 0, 1, 1, 1}, // R
  {1, 0, 0, 0, 1, 1}, // S
  {1, 1, 0, 0, 1, 1}, // T
  {0, 0, 1, 1, 0, 1}, // U
  {0, 0, 1, 1, 1, 1}, // V
  {1, 1, 1, 0, 1, 0}, // W
  {1, 0, 1, 1, 0, 1}, // X
  {1, 1, 1, 1, 0, 1}, // Y
  {0, 1, 1, 1, 0, 1}  // Z
};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);     
    digitalWrite(ledPins[i], LOW);   
  }
  Serial.begin(9600); 
}

void escreveLetra(char letra) {
  if (letra < 'A' || letra > 'Z') return; 
  byte idx = letra - 'A'; 

  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], braille[idx][i] ? HIGH : LOW); 
  }

  delay(3000); 

  
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  if (Serial.available() > 0) {
    char letra = Serial.read(); 
    letra = toupper(letra); 
    escreveLetra(letra); 
  }
  
}
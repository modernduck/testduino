void setup() {
  //set หลอดไฟให้พรอ้ม
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  // O O O O
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  // รอ 1 วิ
  delay(1000);
  // X X X X
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  // รอ 1 วิ
  delay(1000);
  //X O O X
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, LOW);
  // รอ 1 วิ
  delay(1000);
  // X X X X
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  //เขียนโปรแกรมให้ไฟเบอร์ 13, 14 แสดงสลับกัน เรื่อยๆ
}

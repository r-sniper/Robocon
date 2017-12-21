//Readings from cytron stored in this
int readings[] = { -10, -10, -10, -10, -10, -10, -10, -10};

//To Mosfet - Each cuople for 1 motor (1,0-Forward)(0,1-Backward)
int motor_pins[] = {2, 3, 4, 5, 6, 7, 8, 9};

//Sensor pins from Cytron
int cytron_pins[] = {30, 31, 32, 33, 34, 35, 36, 37};

//Initialization of pins
void init() {
  for (int i = 0; i < 8; i++) {
    pinMode(motor_pins[i], OUTPUT);
    pinMode(cytron_pins[i], INPUT);
  }
}

void read_cytron() {
  for (int i = 0; i < 8; i++) {
    readings[i] = digitalRead(cytron_pins[i]);
  }
}

void setup() {
  init();

}




void loop() {
  // put your main code here, to run repeatedly:

}

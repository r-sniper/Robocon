int readings[8];

const int cytronPins[] = {2,3,4,5,6,7,8,9};

void cytron_read(){
  for(int i=0;i<8;i++){
    digitalRead(ytronPins[i],readings[i]);
  }
}

void setup() {
  for(int i=0;i<8;i++){
    pinMode(cytronPins[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}

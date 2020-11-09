//button PB4 is digital pin 12


unsigned int count;
bool previous;
unsigned char*reader = (unsigned char*) 0x23;
void setup() {
  // put your setup code here, to run once:
  

    
      Serial.begin(9600);

      for(;;){
        bool current = (((*reader) & 0b00010000)!= 0);
        if(current && !previous){
          count++;
          Serial.println(count);
        }
        previous = current;
      }
    
}

void loop() {

}

/**
 * Describe your system. Be sure to rename the file to the name of your system
 * first last - month year
 */

int lightTime = 20;
int selectedLight = 1;
int roundNumber = 1;
bool running = true;


 void setup() {
    randomSeed(analogRead(0));
    selectedLight = random(1,6);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
 }


 void loop() {
   while (running) {
        digitalWrite(selectedLight+1, HIGH);
        if (selectedLight == 1){
          digitalWrite(6, LOW);
        }
        else {
          digitalWrite(selectedLight, LOW);
        }
        
          
        if (lightTime > 600){
            running = false;
            for (int i = 0; i < 5; i++){
              digitalWrite(selectedLight+1, LOW);
              delay(100);
              digitalWrite(selectedLight+1, HIGH);
              delay(100);
            }
            return;
        }
        selectedLight++;
        if (selectedLight > 5) {
            selectedLight = 1;
            
        }
   		delay(lightTime);
     
        lightTime += roundNumber * 0.25;
     	roundNumber++;
   }
 }
/**
 * Describe your system. Be sure to rename the file to the name of your system
 * first last - month year
 */

const int RED_PIN = 2;
const int GREEN_PIN = 3;
const int BLUE_PIN = 4;
const int YELLOW_PIN = 5;
const int WHITE_PIN = 6;
int lightTime = random(100,151);
int selectedLight = 1;
int endLight = random(1,6);
bool running = true;

 void setup() {
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    pinMode(YELLOW_PIN, OUTPUT);
    pinMode(WHITE_PIN, OUTPUT);
 }


 void loop() {
    while (running)
        if (selectedLight == 1){
            digitalWrite(RED_PIN, HIGH);
        }
        else {
            digitalWrite(RED_PIN, LOW);
        }
        if (selectedLight == 2){
            digitalWrite(GREEN_PIN, HIGH);
        }
        else {
            digitalWrite(GREEN_PIN, LOW);
        }
        if (selectedLight == 3){
            digitalWrite(BLUE_PIN, HIGH);
        }
        else {
            digitalWrite(BLUE_PIN, LOW);
        }
        if (selectedLight == 4){
            digitalWrite(YELLOW_PIN, HIGH);
        }
        else {
            digitalWrite(YELLOW_PIN, LOW);
        }
        if (selectedLight == 5){
            digitalWrite(WHITE_PIN, HIGH);
        }
        else {
            digitalWrite(WHITE_PIN, LOW);
        }
        if (lightTime > 2000){
            running = false;
            return;
        }
        selectedLight++;
        if (selectedLight > 5) {
            selectedLight = 1;
        }
        delay(lightTime)
        lightTime += random(50,81);
 }
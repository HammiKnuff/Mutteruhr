/* MutterUhr Code für Arduino
 *  Setze an belegte Pins (in dem fall Digital 2 und 3) und Kabel der uhr jeweils einen Elko.
 *  Jede Aktion dauert 20ms die pro Aktion abgezogen werden müssen oder zugezählt werden damit die Uhr nicht nachgeht.
 *  
 *  Original läuft auf: Arduino Mini
 *                      Atmega168
 *  
 *      (Digital Pin2) -> -)|- -> Clock Cable 1
 *      (Digital Pin3) -> -)|- -> Clock Cable 2
 *      
 *      -)|-  = Capacitor
 *      
 *      Hammi 21.07.2017
 *      CCCHH
 *      
 */

void setup() {
  // initialize 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

// init
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 delay(900);
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);
 delay(900);
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 delay(900);
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);
}



// main thing
void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(59920);         
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(59920);                  
}

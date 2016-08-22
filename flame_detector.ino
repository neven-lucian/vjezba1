

//Example for KY-026
//TkkrLab
int Led = 13 ;// define LED Interface
; // define the flame sensor interface
int analoog = A3; // define the flame sensor interface
// define numeric variables val
float sensor; //read analoog value
 
void setup ()
{
  
   ;// output interface defines the flame sensor
  pinMode (analoog, INPUT) ;// output interface defines the flame sensor
  Serial.begin(9600);
}
 
void loop ()
{
  sensor = analogRead(analoog);
  Serial.println(sensor);  // display tempature
 
  
  
  delay(1000);
}

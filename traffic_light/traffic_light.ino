/*
  Traffic Light
  by Just Barran
*/

int led_green = 9;
int led_yellow = 10;
int led_red = 11;
int button = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_green,OUTPUT); 
  pinMode(led_yellow,OUTPUT); 
  pinMode(led_red,OUTPUT); 
  pinMode(button,INPUT); 
  
}

// the loop function runs over and over again forever
void loop() {
    
    digitalWrite(led_green, HIGH);   //Green light on 
    delay(3000); //wait
    digitalWrite(led_green, LOW);   
    digitalWrite(led_yellow, HIGH);  
    delay(2000);                       
    digitalWrite(led_yellow, LOW);     
    digitalWrite(led_red, HIGH);    
    delay(3000); 
    digitalWrite(led_red, LOW);    
    
  }                        
}

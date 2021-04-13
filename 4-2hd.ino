int blueLED = D7; 
int greenLED = D6; 
int redLED = D5; 

void setup() 
{
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  
  Particle.function("TrafficLights", lightController);
}

void loop() 
{

}

int lightController(String input)
{
    if(input == "blue")
    {
        digitalWrite(blueLED, HIGH);
        digitalWrite(greenLED, LOW);
        digitalWrite(redLED, LOW);
        return 1;
        
    }
    else if(input == "green")
    {
        digitalWrite(blueLED, LOW);
        digitalWrite(greenLED, HIGH);
        digitalWrite(redLED, LOW);
        return 1;
    }
    else if(input == "red")
    {
        digitalWrite(blueLED, LOW);
        digitalWrite(greenLED, LOW);
        digitalWrite(redLED, HIGH);
        return 1;
    }
    else
    {
        digitalWrite(blueLED, LOW);
        digitalWrite(greenLED, LOW);
        digitalWrite(redLED, LOW);
        return -1; //If didnt work
    }
}


//this code is witten by mr Abhinav
// this code is a part of led chaser tree project.

int led[5]={2,3,4,5,6};
int x , y;
 void setup()
{ Serial.begin(9600);
  //setting LED's to ouput
  for(int i = 0; i<=5; i++)
  {
    pinMode(led[i], OUTPUT);
  }
  pinMode(A0 , INPUT);
}

void loop()
{
  int z;
   for(int i = 0 ; i<=5 ; i++)
  {
    x = analogRead(A0);
    y = map(x , 0 , 1024 , 0,1000);
    digitalWrite(led[i], 1);
    delay(y);
    digitalWrite(led[i], 0);
  } 
}

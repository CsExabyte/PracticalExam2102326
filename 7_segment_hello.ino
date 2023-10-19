int segPins[]={8,9,4,2,3,6,7,5}; 
byte segCode[11][8]=
{
  //a b c d e f g .
   {0,1,1,0,1,1,1,0},
   {1,0,0,1,1,1,1,0},
   {0,0,0,1,1,1,0,0},
   {0,0,0,1,1,1,0,0},
   {1,1,1,1,1,1,0,0},
   {0,0,0,0,0,0,0,1}
  
};

void displaydigit(int digit)
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(segPins[i],segCode[digit][i]);
  }
  }
  void setup() {
    // put your setup code here, to run once;-
    for(int i=0;i<7;i++)
    {
      pinMode(segPins[i],OUTPUT);
    }
  }
  void loop () {
  // put your main code here to run repeatedly:
  for(int n=0;n<8;n++)
  {
    displaydigit(n);
    delay(1000);
  }
  }
  

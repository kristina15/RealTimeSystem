#define pin3 3
#define pin5 5
#define pin6 6
#define pin9 9
#define pin10 10
#define pin11 11

const long itr1 = 1000000;
const long itr2 = 100;
const long itr3 = 1000;
const long itr4 = 10000;
const long itr5 = 100000;
const long itr6 = 1500000;
int pin3State=LOW;
int pin5State=LOW;
int pin6State=LOW;
int pin9State=LOW;
int pin10State=LOW;
int pin11State=LOW;
unsigned long previousMicro1=0;
unsigned long previousMicro2=0;
unsigned long previousMicro3=0;
unsigned long previousMicro4=0;
unsigned long previousMicro5=0;
unsigned long previousMicro6=0;


void setup() 
{
  pinMode(pin3,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin9,OUTPUT);
  pinMode(pin10,OUTPUT);
  pinMode(pin11,OUTPUT);
}
void loop() {
  unsigned long currentMicro = micros();
  if(currentMicro-previousMicro1>=itr1)
  {
    previousMicro1=currentMicro;
    if(pin3State==LOW)
    {
      pin3State=HIGH;  
    }
    else
    {
      pin3State=LOW;
    }    
    digitalWrite(pin3,pin3State);
  }
  
  if(currentMicro-previousMicro2>=itr2)
  {
    previousMicro2=currentMicro;
    if(pin5State==LOW)
    {
      pin5State=HIGH;  
    }
    else
    {
      pin5State=LOW;
    }    
    digitalWrite(pin5,pin5State);
  }

  if(currentMicro-previousMicro1>=itr3)
  {
    previousMicro3=currentMicro;
    if(pin6State==LOW)
    {
      pin6State=HIGH;  
    }
    else
    {
      pin6State=LOW;
    }    
    digitalWrite(pin6,pin6State);
  }

  if(currentMicro-previousMicro4>=itr4)
  {
    previousMicro4=currentMicro;
    if(pin9State==LOW)
    {
      pin9State=HIGH;  
    }
    else
    {
      pin9State=LOW;
    }    
    digitalWrite(pin9,pin9State);
  }

  if(currentMicro-previousMicro5>=itr5)
  {
    previousMicro5=currentMicro;
    if(pin10State==LOW)
    {
      pin10State=HIGH;  
    }
    else
    {
      pin10State=LOW;
    }    
    digitalWrite(pin10,pin10State);
  }
  
  if(currentMicro-previousMicro6>=itr6)
  {
    previousMicro6=currentMicro;
    if(pin11State==LOW)
    {
      pin11State=HIGH;  
    }
    else
    {
      pin11State=LOW;
    }    
    digitalWrite(pin11,pin11State);
  }
}

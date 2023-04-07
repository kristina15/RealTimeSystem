#include <"TaskManagerIO.h">
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

void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  taskid_t task1 = taskManager.scheduleFixedRate(interval1, [] {
    if(pin1State==LOW){
      pin1State=HIGH;  
    }else{
      pin1State=LOW;
      }    
    digitalWrite(pin1,pin1State);
  }, TIME_MICROS);
  taskid_t task2 = taskManager.scheduleFixedRate(interval2, [] {
    if(pin2State==LOW){
      pin2State=HIGH;  
    }else{
      pin2State=LOW;
      }    
    digitalWrite(pin2,pin2State);
  }, TIME_MICROS);
  taskid_t task3 = taskManager.scheduleFixedRate(interval3, [] {
    if(pin3State==LOW){
      pin3State=HIGH;  
    }else{
      pin3State=LOW;
      }    
    digitalWrite(pin3,pin3State);
  }, TIME_MICROS);
  taskid_t task4 = taskManager.scheduleFixedRate(interval4, [] {
    if(pin4State==LOW){
      pin4State=HIGH;  
    }else{
      pin4State=LOW;
      }    
    digitalWrite(pin4,pin4State);
  }, TIME_MICROS);
  taskid_t task5 = taskManager.scheduleFixedRate(interval5, [] {
    if(pin5State==LOW){
      pin5State=HIGH;  
    }else{
      pin5State=LOW;
      }    
    digitalWrite(pin5,pin5State);
  }, TIME_MICROS);
  taskid_t task6 = taskManager.scheduleFixedRate(interval6, [] {
    if(pin6State==LOW){
      pin6State=HIGH;  
    }else{
      pin6State=LOW;
      }    
    digitalWrite(pin6,pin6State);
  }, TIME_MICROS);
}

void loop() {
   taskManager.runLoop();
}

#include<Servo.h>
#include<Keypad.h>
#include<EEPROM.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,2,3,4,5);
char pressed_key = '0';
char password[5]; //recognises key from the 4x4 keypad
char initial_pwd[5]; //original password is 12345 and is stored here.
int i=0;
const byte rows = 4;
const byte columns = 4;
char KeysPad[rows][columns] = {{'1','2','3','A'},{'4','5','6','B'}
                            ,{'7','8','9','C'},{'*','0','#','D'}};
byte row_pins[rows] = {A0,A1,A2,A3};
byte col_pins[columns] = {A4,A5,9,8};
Keypad keypad_keys = Keypad(makeKeymap(KeysPad),row_pins,col_pins,
                            rows,columns); //makes the keypad
int ServoPin = 7; Servo S;
int wrong = 0; //counts number of times wrong password is entered
const int buzzer = 10;
void setup()
{
  S.attach(7);
  S.write(0); //initial position of Servo motor which represents the locked state (0 degree)
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("SECURIFY");
  lcd.setCursor(0,1);
  lcd.print("Digital Lock");
  delay(3000);
  lcd.clear();
  lcd.print("Enter password");
  lcd.setCursor(0,1);
  initialpassword();
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{  
  while(wrong < 2)
  {
    int result = gettingKeys();
    delay(1000);
    int corr = correctFunction(result); 
    delay(1000);
    if(corr == 1)
    {
      break;           
    }
    else
    {
      wrong++;
      lcd.clear();
      lcd.print("Incorrect!!!");
      delay(2000);
      lcd.clear();
      lcd.print("Enter again");
      lcd.setCursor(0,1);
    }
  }
  if(wrong == 2)
  {
    tone(buzzer,440,2000);
    lcd.clear();
    lcd.print("Alert Sent");
    lcd.setCursor(0,1);
    lcd.print("Alarm Going On!!!");
    delay(500);
  }
}
int gettingKeys()
{
  int count = 0;
  while(count<5)
  {
  pressed_key = keypad_keys.getKey();
  
  if(pressed_key)
  {
    password[count] = pressed_key;
    lcd.print(pressed_key);
    count++;
  }
  }
  return count;
}
int correctFunction(int a)
{
  int correct = 0;
  if(a==5)
  {
    delay(2000);
    for(int j=0;j<5;j++)
    {
      initial_pwd[j] = EEPROM.read(j);      
    }
    if(strncmp(password,initial_pwd,5)==0)
    {
      lcd.clear();
      lcd.print("Correct Password");
      S.write(90); //servo motor rotates 90 degrees which represents the unlocked state
      delay(1000);
      S.write(0);
      delay(1000);
      correct++;
      
      delay(2000); 
    }
  }
  if(correct!=0)
  return 1;
  else
  return 0;
}
void initialpassword()
{
  for(int j=0;j<5;j++)
  {
    EEPROM.write(j,j+49);
  }
  for(int j=0;j<5;j++)
  {
    initial_pwd[j] = EEPROM.read(j); //initial_pwd is now set to 12345
  }
}

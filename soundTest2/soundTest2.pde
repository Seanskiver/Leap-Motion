// Imported libraries
import ddf.minim.*;
import controlP5.*;

// Global variables
Minim minim;
ControlP5 cp5;

int mouseStatus;
AudioSample[] notes = new AudioSample[13];
String[] noteStrings = {
  "C3", "C#3", "D3", "D#3",
  "E3", "F3", "F#3", "G3",
  "G#3", "A3", "A#3", "B3",
  "C4"
};

void setup() {
  size(1060,610);
  cp5 = new ControlP5(this);
  minim = new Minim(this);
  
  // Create a button for each piano note
  for (int i = 0; i < noteStrings.length; i++) {
    notes[i] = minim.loadSample("piano/" + noteStrings[i] + ".wav", 512);
    
    cp5.addButton(noteStrings[i])
      .setValue(i)
      .setPosition(10 + (i*80), 400)
      .setSize(79,200)
      ;
  }
}

void draw() {
  background(200);
  if ( mouseStatus != checkForMouseOver(mouseX, mouseY) ){
    mouseStatus = checkForMouseOver(mouseX, mouseY);
    playNote(mouseStatus);
  }
}


public int checkForMouseOver (int x, int y)
{
  //checks position of x and y and returns
  //array index of note being moused over
  
  int i = -1;

  if ( y >= 400 && x > 10 && x < 1050 )
  {
    i = (x - 10) / 80;
  }
  
  return i;
}

public void playNote (int cmd)
{
  if (cmd != -1)
  {
    notes[cmd].trigger();
  }
}
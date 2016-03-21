/**
    A program for designing and playing virutal musical instruments
    using the mouse, keyboard, or Leap Motion device.
*/

import controlP5.*;
import java.io.*;
import java.util.*;

ControlP5 cp5;
Button bLoad;
DropdownList ddlInst;

Instrument activeInstrument = null;
File instDir;
File[] instList;

void setup(){
  size(640, 480);
  background(51);
  noStroke();
  
  instDir = new File(dataPath("") + "/instruments");
  
  gui();
}

void gui() {
  cp5 = new ControlP5(this);
  
  bLoad = cp5.addButton("bload")
     .setValue(1)
     .setPosition(0,0)
     .setSize(200,30);
  bLoad.setColorBackground(color(190));
  
  
  ddlInst = cp5.addDropdownList("ddlinst")
     .setPosition(200,0);
  ddlInst.setColorBackground(color(190));
  ddlInst.setColorActive(color(225,128));
  ddlInst.setItemHeight(30);
  ddlInst.setBarHeight(20);
  ddlInst.setCaptionLabel("Instrument List");
  
  FileFilter filter = new FileFilter() {
      public boolean accept(File pathname) {
        if (pathname.isDirectory()){
            File config = new File(pathname.getAbsolutePath() + "/instrument.json");
            if (config.isFile()) return true;
            else return false;
        }
        else return false;
      }
  };
  instList = instDir.listFiles(filter);
    
  for (int i=0; i < instList.length; i++)
    ddlInst.addItem(instList[i].getName(), instList[i]);
}

void controlEvent(ControlEvent theEvent) {
  // DropdownList is of type ControlGroup.
  // A controlEvent will be triggered from inside the ControlGroup class.
  // therefore you need to check the originator of the Event with
  // if (theEvent.isGroup())
  // to avoid an error message thrown by controlP5.

  if (theEvent.isGroup()) {
    // check if the Event was triggered from a ControlGroup
    println("event from group : "+theEvent.getGroup().getValue()+" from "+theEvent.getGroup());
  } 
  else if (theEvent.isController()) {
    println("event from controller : "+theEvent.getController().getValue()+" from "+theEvent.getController());
    //if (theEvent.isFrom(cp5.getController("ddlinst")){
      
  // }
   // File select = theEvent.getController().getValue();
   // activeInstrument = new Instrument(select);
  }
}

public void bload(int inValue){
    if (activeInstrument != null)
      activeInstrument.play();
  }

void update(){
  
}

void draw(){
  update();
  background(51);
}
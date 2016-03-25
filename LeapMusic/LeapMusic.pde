/**
    A program for designing and playing virutal musical instruments
    using the mouse, keyboard, or Leap Motion device.
*/

import controlP5.*;
import java.util.*;
import ddf.minim.*;
import ddf.minim.analysis.*;
import ddf.minim.effects.*;
import ddf.minim.signals.*;
import ddf.minim.spi.*;
import ddf.minim.ugens.*;

import java.util.Map;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.ConcurrentHashMap;
import com.leapmotion.leap.Controller;
import com.leapmotion.leap.Finger;
import com.leapmotion.leap.Frame;
import com.leapmotion.leap.Hand;
import com.leapmotion.leap.Tool;
import com.leapmotion.leap.Vector;
import com.leapmotion.leap.processing.LeapMotion;

// Global variables
ControlP5 cp5;
Minim minim;
LeapMotion leapMotion;
Instrument instrument = null;
ConcurrentMap<Integer, Integer> fingerColors;
ConcurrentMap<Integer, Vector> fingerPositions;

void setup(){
  minim = new Minim(this);
  leapMotion = new LeapMotion(this);
  fingerColors = new ConcurrentHashMap<Integer, Integer>();
  fingerPositions = new ConcurrentHashMap<Integer, Vector>();
  size(300, 400);
  gui();
}

void draw(){
  background(51);
  if (instrument != null) if (instrument.isActive()) instrument.step(fingerPositions);
  for (Map.Entry entry : fingerPositions.entrySet())
      {
        Integer fingerId = (Integer) entry.getKey();
        Vector position = (Vector) entry.getValue();
        fill(fingerColors.get(fingerId));
        noStroke();
        ellipse(leapMotion.leapToSketchX(position.getX()), leapMotion.leapToSketchY(position.getY()), 24.0, 24.0);
      }
}

void gui() {
  cp5 = new ControlP5(this);
  
  List instList = Arrays.asList("Piano", "Theramin");
  
  cp5.addScrollableList("slInst")
      .setPosition(0, 0)
      .setLabel("Load Instrument")
      .setSize(200, 100)
      .setBarHeight(20)
      .setItemHeight(20)
      .addItems(instList);
}

void slInst(int n){
  String selection = (String)cp5.get(ScrollableList.class, "slInst").getItem(n).get("text");
  if (selection == "Piano") {
    instrument = new Piano(minim);
    launchInstrument(instrument);
  }
  else if (selection == "Theramin"){
    instrument = new Theramin();
    launchInstrument(instrument);
  }
}

void launchInstrument(Instrument anInstrument){
  println("Launching instrument " + anInstrument.getName());
  cp5.get(ScrollableList.class, "slInst").remove();
  surface.setSize(anInstrument.getStageWidth(), anInstrument.getStageHeight());
  anInstrument.activate();
}

void onFrame(final Controller controller)
  {
    Frame frame = controller.frame();
    fingerPositions.clear();
    for (Finger finger : frame.fingers())
    {
      int fingerId = finger.id();
      color c = color(random(0, 255), random(0, 255), random(0, 255));
      fingerColors.putIfAbsent(fingerId, c);
      fingerPositions.put(fingerId, finger.tipPosition());
    }
  }
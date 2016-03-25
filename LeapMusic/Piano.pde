class Piano implements Instrument{
  // Piano fields
  String name = "", dir = "";
  int stageWidth = 0, stageHeight = 0;
  boolean active = false;
  //PImage stageBG = null;
  //PShape shape = null;
  //JSONObject config = null;
  
  Minim minim;
  ArrayList<pKey> keys = new ArrayList<pKey>();
  int pX = 0, pY = 0;
  
  
  // Piano Constructor
  Piano(Minim aMinim){
    name = "Piano";
    dir = "instruments/" + name;
    stageWidth = 1040;
    stageHeight = 400;
    pX = 1;
    pY = height - pKey.kHeight;
    minim = aMinim;
    
    
    //stageBG = loadImage(dir + "/models/background.png");
    //shape = loadShape(dir + "/models/model.svg");
    
    // Setup
    populateKeys();
  }
  
  void populateKeys(){ //<>//
    String[] noteStrings = { //<>//
      "C3", "C#3", "D3", "D#3",
      "E3", "F3", "F#3", "G3",
      "G#3", "A3", "A#3", "B3",
      "C4"
    };
    for (int i = 0; i < noteStrings.length; i++){
      pKey akey = new pKey(pX + (i * pKey.kWidth), pY, noteStrings[i], minim); //<>//
      keys.add(akey);
    }
  };
  
  String getName(){return name;}
  int getStageWidth(){return stageWidth;}
  int getStageHeight(){return stageHeight;}
  boolean isActive(){return active;}
  void activate(){active = true;}
  
  class pKey{ // piano key nested class
    String id = "key";
    boolean wasPressed = false;
    AudioSample sample = null;
    int kX = 0, kY = 0;
    final static int kWidth = 80, kHeight = 200;
    final static color kColor = #ffffff;
    final static color kOutline = #808080;
    final static color kColorPressed = #cccccc;
    
    pKey(int x, int y, String note, Minim minim){ // Constructor //<>//
      id = note; //<>//
      sample = minim.loadSample(dir + "/sound/" + id + ".wav", 512); //<>//
      kX = x; //<>//
      kY = y; //<>//
    }
    
    boolean pressed(ConcurrentMap<Integer, Vector> fPositions){
      for (Map.Entry entry : fPositions.entrySet())
          {
            Vector position = (Vector) entry.getValue();
            float posX = leapMotion.leapToSketchX(position.getX());
            println(posX);
            float posY = leapMotion.leapToSketchY(position.getY());
            println(posY);
            if ((posX >= this.kX && posX < (this.kX + kWidth)) && (posY >= this.kY & posY < this.kY + kHeight) ) return true;
          }
          
      if ((mouseX >= this.kX && mouseX < (this.kX + kWidth)) && (mouseY >= this.kY & mouseY < this.kY + kHeight) ) return true;
      else{
           //<>//
          return false;
      }
      
    }
    
    boolean checkHit(ConcurrentMap<Integer, Vector> fPositions){
      if (this.pressed(fPositions)){
        if (!this.wasPressed){
          this.wasPressed = true;
          return true;
        }
        else{
          return false;
        }
      }
      else{
        this.wasPressed = false;
        return false;
      }
    }
  }
  
  void step(ConcurrentMap<Integer, Vector> fPositions){
    for (int i = 0; i < keys.size(); i++){
      stroke(pKey.kOutline);
      if (keys.get(i).pressed(fPositions)){
        fill(pKey.kColorPressed);
      }
      else {
        fill(pKey.kColor);
      }
      rect(keys.get(i).kX, keys.get(i).kY, pKey.kWidth, pKey.kHeight);
      
      if (keys.get(i).checkHit(fPositions)){
        keys.get(i).sample.trigger();
      }
    }
    
    
  }
}
class Theramin extends Instrument{
  Theramin(){
    super("Theramin");
  }
  
  void step(){
    image(bg, 0, 0, width, height);
    shape(shape, 0, 0, width, height);
  }
  
  void keyPressed() {
    if (key == 'f'){
      println("This should be fullscreen");
    }
  }
}
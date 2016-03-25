interface Instrument {
  String getName();
  int getStageWidth();
  int getStageHeight();
  boolean isActive();
  void activate();
  void step();
}
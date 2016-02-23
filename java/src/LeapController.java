// Leap motion library classes
import com.leapmotion.leap.*;
import com.leapmotion.leap.Gesture.State;
// Java Exception class for error handling
import java.io.IOException;
// Listener class: Listens for events such as start, exit, connect
class LeapListener extends Listener {
	
	// What to do when the Leap Motion is initialized, passes leap motion controller 
	public void onInit(Controller controller) {
		System.out.println("Initialized");
	}
	
	// What to do when Leap motion is connected
	public void onConnect(Controller controller) {
		System.out.println("Leap Motion connected");
		//Enable all Gestures
		controller.enableGesture(Gesture.Type.TYPE_SWIPE);
		controller.enableGesture(Gesture.Type.TYPE_CIRCLE);
		controller.enableGesture(Gesture.Type.TYPE_SCREEN_TAP);
		controller.enableGesture(Gesture.Type.TYPE_KEY_TAP);
	}
	
	// What to do when controller is disconnected
	public void onDisconnect(Controller controller) {
		System.out.println("Leap Motion disconnected");
	}
	
	// On program exit
	public void onExit(Controller controller) {
		System.out.println("Exited");
	}
	
	// Processes each frame sent from the leap motion
	public void onFrame(Controller controller) {
		// Instantiating the Frame class with our controller
		Frame frame = controller.frame();
		
		// Print frame data 
		/**-/System.out.println("Frame ID: " + frame.id()
							+ "Time Stamp: " + frame.timestamp()
							+ ", Number of Hands: " + frame.hands().count()
							+ ", Number of fingers: " + frame.fingers().count()
							+ ", Number of tools: " + frame.tools().count()
							+ ", Number of Gestures: " + frame.gestures().count());/**/
		
		// Hand data loop
		/**/for (Hand hand : frame.hands()) {
			// If isLeft returns true handtype = left hand. Otherwise handtype = right hand
			String handType = hand.isLeft() ? "Left hand: " : "Right hand: ";
			
			// Print hand ID and palm Position
			System.out.println(handType + " " + "id: " + hand.id()
								+ ", Palm position: " + hand.palmPosition());
			
			//Get normal palm Vector: Palm makes is flat
			Vector normal = hand.palmNormal();
			// get hand direction
			Vector direction = hand.direction();
			
			
			 // Pitch: Tilt forward and back
			 // Roll: Rotation of wrist
			 // Yaw: The direction of your hand moving side-to-side without moving your arm
			 // More info on these and vectors @ https://developer.leapmotion.com/documentation/java/api/Leap.Vector.html
			
			
			// output pitch, roll, yaw from hand
			System.out.println("Pitch: " + Math.toDegrees(direction.pitch())
								+ ", Roll: " + Math.toDegrees(normal.roll())
								+ "Yaw: " + Math.toDegrees(direction.yaw()));
		}/**/
		
		// Finger and bone data loop
		/**-/for(Finger finger : frame.fingers()) {
			System.out.println("Finger Type: " + finger.type()
								+ ", Finger ID: " + finger.id()
								+ ", Finger length: " + finger.length() + "mm"
								+ ", Finger Width: " + finger.width() + "mm");
				//Bone data loop
				for(Bone.Type boneType : Bone.Type.values()) {
					Bone bone = finger.bone(boneType);
					System.out.println("Bone type: " + bone.type()
										+ ", Start: " + bone.prevJoint()
										+ ", End: " + bone.nextJoint()
										+ ", Direction: " + bone.direction()); // Bone.direction returns a vector	
				}
		}/**/
		
		//Print tool data
		for (Tool tool : frame.tools()) {
			System.out.println("Tool Id: " + tool.id()
								+ ", Tip position: " + tool.tipPosition()
								+ ", Direction: " + tool.direction()
								+ ", Width: " + tool.width() + "mm"
								+ ", Touch Distance: " + tool.touchDistance() + "mm");
			
		}

	}
	
}

public class LeapController {

	public static void main(String[] args) {
		// Instantiate our LeapListener class
		LeapListener listener = new LeapListener();
		
		// Instantiate the Controller object from the Leap Motion library
		Controller controller = new Controller();
		
		// Adding our listener to the controller 
		controller.addListener(listener);
		
		// Keep reading until Enter is pressed
		// This functionality is predetermined
		System.out.println("Press Enter to quit");
		
		// Try to read user Enter key press
		try {
			System.in.read();
		} catch(IOException e) {
			e.printStackTrace();
		}
		
		// Remove our listener from the controller after exit.
		controller.removeListener(listener);
		
	}

}

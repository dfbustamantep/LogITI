package RobotPrueba;
import robocode.*;
//import java.awt.Color;

// API help : https://robocode.sourceforge.io/docs/robocode/robocode/Robot.html

/**
 * RobotPrueba - a robot by (your name here)
 */
public class RobotPrueba extends Robot
{
	/**
	 * run: RobotPrueba's default behaviora
	 */
	public void run() {
		// Initialization of the robot should be put here

		// After trying out your robot, try uncommenting the import at the top,
		// and the next line:

		// setColors(Color.red,Color.blue,Color.green); // body,gun,radar

		// Robot main loop
		
		/*Mientras no ocurra alguna de los 3metodos definidos*/
		while(true) {
			// Replace the next 4 lines with any behavior you would like
			ahead(100);//avanza 100px
			turnGunRight(360);//gira el cañon 360 grados
			back(100);//retrocede 100px
			turnGunRight(360);//gira el cañon 360 grados
		}
	}

	/**
	 * onScannedRobot: What to do when you see another robot
	 */
	public void onScannedRobot(ScannedRobotEvent e) {
		// Replace the next line with any behavior you would like
		out.println("Robot Scanned");
		if (e.getDistance() < 100) {
           fire(3);
       } else if (e.getDistance() < 200){
           fire(2);
       }else{
		   fire(1);
	   }
	}

	/**
	 * onHitByBullet: What to do when you're hit by a bullet
	 */
	public void onHitByBullet(HitByBulletEvent e) {
		// Replace the next line with any behavior you would like
		out.println("I was hit");
		back(10);
	}
	
	/**
	 * onHitWall: What to do when you hit a wall
	 */
	public void onHitWall(HitWallEvent e) {
		// Replace the next line with any behavior you would like
		out.println("Hit a wall");
		back(20);
	}	
}

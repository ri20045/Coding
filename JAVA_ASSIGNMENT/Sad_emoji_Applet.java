// <Applet code="code.class" height = 500 width = 500></Applet>
//Sad emoji applet
import java.awt.*;
import java.applet.*;
public class code extends Applet{
	public void paint(Graphics g){
		g.setColor(Color.black);
		g.drawOval(200,200,500,500);
		g.setColor(Color.yellow);
		g.fillOval(200,200,500,500);
		g.setColor(Color.green);
		g.fillOval(300,300,40,70);
		g.fillOval(550,300,40,70);
		g.setColor(Color.black);
		g.fillOval(420,400,70,70);//black circle
		g.setColor(Color.red);
		g.drawArc(300, 525, 300, 100, 0, 180);
	} 
}

// <Applet code="code.class" height=500 width=500></Applet>
import java.awt.*;
import java.applet.*;
public class code extends Applet{
	int x[] = {90,225,360};
	int y[] = {200,30,200};
	public void paint(Graphics g){
		//black Chimney
		g.setColor(Color.black);
		g.fillRect(137,57,40,90);
		//orange chimney
		g.setColor(Color.orange);
		g.fillRect(142,65,30,80);
		//upper triangular roof
		g.setColor(Color.black);
		g.fillPolygon(x, y, 3);
		//house layout
		g.setColor(Color.black);
		g.fillRect(100,200,10,150);
		g.fillRect(100,350,250,10);
		g.fillRect(340,200,10,150);
		//inner rectangle(the red color)
		g.setColor(Color.red);
		g.fillRect(110,200,230,150);
		//window outer square
		g.setColor(Color.black);
		g.fillRect(150,260,50,50);
		//window inner square
		g.setColor(Color.white);
		g.fillRect(153,263,43,43);
		//inner cross rectangle
		g.setColor(Color.black);
		g.fillRect(153,279,43,10);
		g.fillRect(169,263,10,43);
		//inner gate rectangles(3)
		g.setColor(Color.black);
		g.fillRect(240,260,10,90);
		g.fillRect(290,260,10,90);
		g.fillRect(240,260,60,10);
		//inner rectangle for main door
		g.setColor(Color.gray);
		g.fillRect(250,270,40,80);
	}
}

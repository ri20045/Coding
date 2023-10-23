//<Applet code="code.class" height=500 width=500></Applet>
import java.awt.*;
import java.applet.*;
public class code extends Applet{
	Font obj = new Font("Times New Roman",Font.BOLD,50);
	public void paint(Graphics g){
		g.setFont(obj);
		g.drawString("GeeksOfGeeks", 200, 300);
	}
}

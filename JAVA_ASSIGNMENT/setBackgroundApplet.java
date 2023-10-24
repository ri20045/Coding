// <Applet code="code.class" height=500 width=500></Applet>
import java.awt.*;
import java.applet.*;

public class code extends Applet {
    public void init() {
        setBackground(Color.yellow);  
    }

    public void paint(Graphics g) {
        g.setColor(Color.gray);
        g.fillOval(200, 200, 300, 300);

        g.setColor(Color.black);  
        g.drawString("Riya Rawat", 300, 350);
    }
}

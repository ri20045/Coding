// <Applet code ="code.class" width=500 height=500></Applet>
import java.awt.*;
import java.applet.*;
public class code extends Applet{
    public void paint(Graphics g){
        setForeground(Color.red);
        g.drawRoundRect(10,10,200,100,30,30);
    }
}

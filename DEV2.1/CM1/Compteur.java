import javax.swing.*;
import java.awt.*;
 
public class Compteur extends JComponent {

  private Image six;;

  public Compteur(){
    this.six = Toolkit.getDefaultToolkit().getImage("6.png");
  }

  @Override
  protected void paintComponent(Graphics pinceau) {
    Graphics frame = pinceau.create();
    if (this.isOpaque()) {
      frame.setColor(this.getBackground());
      frame.fillRect(0, 0, this.getWidth(), this.getHeight());
    }
    frame.drawImage(this.six, 10, 20, this);
  }
}
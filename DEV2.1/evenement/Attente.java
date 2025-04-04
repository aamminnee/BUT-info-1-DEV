import java.awt.*;
import javax.swing.*;

public class Attente extends JComponent {
    private int page_active = 1; // Par défaut, la page est active

    // Méthode pour modifier l'état et redessiner
    public void setPageActive(int active) {
        this.page_active = active;
        repaint(); // Redessiner l'interface après changement
    }
    
    @Override
    protected void paintComponent(Graphics pinceau) {
        super.paintComponent(pinceau); // Nettoyer avant de redessiner
        Graphics frame = pinceau.create();
        
        if (this.isOpaque()) {
            frame.setColor(Color.GREEN);
            frame.fillRect(0, 0, this.getWidth(), this.getHeight());
        }

        if (this.page_active == 1) {
            frame.setColor(Color.MAGENTA);
            frame.fillOval(50, 50, 50, 50);
        } else {
            frame.setColor(Color.CYAN);
            int cordX1[] = {50, 100, 150};
            int cordY1[] = {50, 100, 50};
            int cordX2[] = {50, 100, 150};
            int cordY2[] = {150, 100, 150};
            frame.fillPolygon(cordX1, cordY1, 3);
            frame.fillPolygon(cordX2, cordY2, 3);
        }
    }
}

import javax.swing.*;
import java.awt.*;
 
public class piege {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();
        fenetre.setSize(500, 500);
        fenetre.setLocation(100, 100);
        fenetre.setMinimumSize(new Dimension(500, 500));
        fenetre.setMaximumSize(new Dimension(500,500));
        fenetre.setLayout(null);
        int[] cord_x = {0, 400, 100, 0, 100};
        int[] cord_y = {0, 0, 400, 100, 100};
        int[] witch = {400, 100, 400, 100, 300};
        int[] weight = {100, 400, 100, 400, 300};
        for (int i = 0; i < 5; i++) {
            JButton btn = new JButton("" + (i + 1));
            btn.setSize(new Dimension(witch[i], weight[i]));
            btn.setLocation(cord_x[i], cord_y[i]);
            fenetre.add(btn);
        }
        fenetre.setVisible(true);
    }
}


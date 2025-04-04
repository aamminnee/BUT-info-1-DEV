import java.awt.*;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Test_grisaille {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame("Ma Fenêtre");
        Color gris = new Grisaille(165);
        fenetre.setSize(400, 300);
        JLabel etiquette5 = new JLabel("Sirocco");
        etiquette5.setHorizontalAlignment(JLabel.CENTER);
        etiquette5.setOpaque(true);
        etiquette5.setBackground(gris);
        fenetre.add(etiquette5, BorderLayout.CENTER);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);
    }
}

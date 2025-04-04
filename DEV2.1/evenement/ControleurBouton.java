import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class ControleurBouton  implements ActionListener {

    private Color couleur;
    private JPanel panneau;

    public ControleurBouton(Color c, JPanel p) {
        this.couleur = c;
        this.panneau = p;
    }

    @Override
    public void actionPerformed(ActionEvent event) {
        this.panneau.setBackground(this.couleur);
    }   
}

import java.awt.*;
import javax.swing.*;

public class FenetreCompteur extends JFrame {

	public FenetreCompteur() {
		this.setSize(500, 500);
        this.setLocation(100, 100);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JButton top = new JButton("\u25B2");
        JButton bottom = new JButton("\u25BC");
        JPanel panelTop = new JPanel();
        JPanel panelBottom = new JPanel();
        Compteur compteur = new Compteur();
        panelTop.add(top);
        panelBottom.add(bottom);
        this.add(panelTop, BorderLayout.NORTH);
        this.add(compteur, BorderLayout.CENTER);
        this.add(panelBottom, BorderLayout.SOUTH);
	}
}
import java.awt.*;
import javax.swing.*;

public class Illumination extends JFrame {
	public Illumination() {
		this.setSize(500, 500);
        this.setLocation(100, 100);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       	Controleur control = new Controleur();
       	if (control.getValeur() > 0) {
       		this.setBackground(Color.WHITE);
       	} else {
       		this.setBackground(Color.BLACK);
       	}
	}
}
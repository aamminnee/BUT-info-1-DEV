import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Controleur implements MouseWheelListener {

	private int mode;

	public Controleur() {
		this.mode = 0;
	}

	public void setValeur(int a) {
		this.mode = a;
		this.repaint();
	}

	public int getValeur() {
		return this.mode;
	}

	@Override
	public void mouseWheelMoved(MouseWheelEvent evenement) {
		int valeur = evenement.getWheelRotation();
		this.setValeur(valeur);
	}
}
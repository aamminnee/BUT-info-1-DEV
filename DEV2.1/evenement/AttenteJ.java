import javax.swing.*;
import java.awt.event.*;

public class AttenteJ extends JFrame implements WindowListener {
    private Attente attente;

    public AttenteJ() {
        this.setSize(500, 500);
        this.setLocation(100, 100);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        attente = new Attente();
        this.add(attente);

        this.addWindowListener(this); // Ajouter le WindowListener
    }

    @Override
    public void windowActivated(WindowEvent e) {
        attente.setPageActive(1); // La fenêtre est active
    }

    @Override
    public void windowDeactivated(WindowEvent e) {
        attente.setPageActive(0); // La fenêtre est désactivée
    }

    // Autres méthodes inutilisées, mais nécessaires pour implémenter WindowListener
    @Override public void windowOpened(WindowEvent e) {}
    @Override public void windowClosing(WindowEvent e) {}
    @Override public void windowClosed(WindowEvent e) {}
    @Override public void windowIconified(WindowEvent e) {}
    @Override public void windowDeiconified(WindowEvent e) {}
}

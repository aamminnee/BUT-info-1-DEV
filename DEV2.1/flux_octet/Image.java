import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.*;

public class Image extends JPanel {
    private BufferedImage image;

    public Image(String filePath) {
        int width = 768;
        int height = 1024;
        this.image = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);

        try (InputStream input = new FileInputStream(filePath)) {
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < width; x++) {
                    int red = input.read();
                    int green = input.read();
                    int blue = input.read();

                    if (red == -1 || green == -1 || blue == -1) {
                        throw new IOException("Fichier incomplet ou corrompu.");
                    }

                    int rgb = (red << 16) | (green << 8) | blue;
                    image.setRGB(x, y, rgb);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
            JOptionPane.showMessageDialog(null, "Erreur lors de la lecture du fichier : " + e.getMessage());
        }
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        if (image != null) {
            g.drawImage(image, 0, 0, null);
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Image Viewer");
        Image panel = new Image("image.bin");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setContentPane(panel);
        frame.setSize(768, 1024);
        frame.setResizable(false);
        frame.setVisible(true);
    }
}

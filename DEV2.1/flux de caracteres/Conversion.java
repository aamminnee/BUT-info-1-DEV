import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;

public class Conversion {

    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Usage : java Conversion <nom_fichier_utf8.txt>");
            return;
        }

        String nomFichierTexte = args[0];
        File fichierTexte = new File(nomFichierTexte);

        if (!fichierTexte.exists()) {
            System.out.println("Erreur : le fichier spécifié n'existe pas.");
            return;
        }

        String nomFichierHtml = nomFichierTexte + ".html";

        try (
            BufferedReader reader = Files.newBufferedReader(fichierTexte.toPath(), StandardCharsets.UTF_8);
            BufferedWriter writer = Files.newBufferedWriter(new File(nomFichierHtml).toPath(), StandardCharsets.UTF_8)
        ) {
            writer.write("<!DOCTYPE html>\n");
            writer.write("<html lang=\"fr\">\n");
            writer.write("<head>\n");
            writer.write("    <meta charset=\"UTF-8\">\n");
            writer.write("    <title>Affichage du fichier texte</title>\n");
            writer.write("    <style>body { font-family: monospace; white-space: pre-wrap; }</style>\n");
            writer.write("</head>\n");
            writer.write("<body>\n");

            String ligne;
            while ((ligne = reader.readLine()) != null) {
                // On échappe les caractères HTML spéciaux pour éviter des erreurs d'affichage
                writer.write(echapperHtml(ligne));
                writer.write("\n");
            }

            writer.write("</body>\n");
            writer.write("</html>\n");

            System.out.println("Fichier HTML généré avec succès : " + nomFichierHtml);

        } catch (IOException e) {
            System.err.println("Erreur lors de la lecture ou l'écriture de fichiers : " + e.getMessage());
        }
    }

    // Fonction pour échapper les caractères spéciaux HTML
    private static String echapperHtml(String texte) {
        return texte.replace("&", "&amp;")
                    .replace("<", "&lt;")
                    .replace(">", "&gt;");
    }
}

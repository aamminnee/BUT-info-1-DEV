public class Date {

    private int annee;
    private int mois;
    private int jour;

    public Date(int a, int b, int c) {
        this.annee = a;
        this.mois = b;
        this.jour = c;
    }
    
    public String toStringElt(int objet) {
        if (objet < 10) {
            return "0" + Integer.toString(objet);
        } else {
            return Integer.toString(objet);
        }
    }

    public String toString() {
        return Integer.toString(this.annee) + "-" + toStringElt(this.mois) + "-" + toStringElt(this.jour);    
    }
}

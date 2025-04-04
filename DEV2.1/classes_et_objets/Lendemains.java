import java.lang.Math;

public class Lendemains {

    private int annee;
    private int mois;
    private int jour;

    public Lendemains(int a, int b, int c) {
        this.annee = a;
        this.mois = b;
        this.jour = c;
    }

    public int[] intervalles(Lendemains journee) {
        int diff_annee = Math.abs(journee.annee - this.annee);
        int diff_mois = Math.abs(journee.mois - this.mois);
        int diff_jour = Math.abs(journee.jour - this.jour);
        int lst[] = {diff_annee, diff_mois, diff_jour};
        return lst;
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

    public Lendemains demain() {
        if (this.mois == 12 && this.jour == 30) {
            Lendemains date_after = new Lendemains(this.annee + 1, 1, 1);
            return date_after;
        } else if (this.jour == 30) {
            Lendemains date_after = new Lendemains(this.annee, this.mois + 1, 1);
            return date_after;
        } else {
            Lendemains date_after = new Lendemains(this.annee, this.mois, this.jour + 1);
            return date_after;
        }
    }
}


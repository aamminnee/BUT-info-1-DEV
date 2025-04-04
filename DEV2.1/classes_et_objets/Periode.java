public class Periode {
 
    private Lendemains debut;
    private Lendemains fin;

    public Periode(Lendemains deb, Lendemains end) {
        this.debut = deb;
        this.fin = end;
    }

    public int jour_ecart() {
        int lst[] = this.debut.intervalles(this.fin);
        return (lst[0] * 365) + (lst[1] * 30) + lst[2];
    }

    public String toString() {
        int lst[] = this.debut.intervalles(this.fin);
        return "il y a : " + Integer.toString(lst[0]) + "d'année(s) d'écart, " + Integer.toString(lst[1]) + "de mois d'écart" + Integer.toString(lst[2]) + "de jours d'écart.";
    }

    public void rallonge_intervalles() {
        this.fin = this.fin.demain();
    }

}

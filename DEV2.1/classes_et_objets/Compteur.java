public class Compteur {
    private int compte;
    public void plusUn() {
      this.compte++;
    }
    public String toString() {
      return Integer.toBinaryString(this.compte);
    }
  }
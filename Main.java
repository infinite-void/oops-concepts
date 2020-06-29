public class Main {
    public static void main(String[] args) {
        ComplexNumber a = new ComplexNumber();
        a.real = 3;
        a.imag = 0;
        a.Print();
        a.PrintConjugate();
        a.ApplyConjugate();
        a.Print();
        a.PrintConjugate();
        System.out.println(a.Magnitude());
    }
}
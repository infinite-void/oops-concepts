public class ComplexNumber {
    int real, imag;

    void Print() {
        if(imag > -1)
               System.out.println(real + "+" + imag + "i");
        else 
                System.out.println(real + " " + imag + "i");
    }

}
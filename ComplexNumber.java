public class ComplexNumber {
    int real, imag;

    void Print() {
        if(imag > -1)
               System.out.println(real + " +" + imag + "i");
        else 
                System.out.println(real + " " + imag + "i");
    }

    void PrintConjugate() {
            System.out.print(real + " ");
            if(imag <= 0)
                System.out.println("+" + -1 * imag + "i");
            else
                System.out.println(-1 * imag + "i");
    }

    void ApplyConjugate() {
        imag = -1 * imag;
    }

    double Magnitude() {
        return Math.sqrt(real * real + imag * imag);
    }
}

//github.com/infinite-void/oops-concepts

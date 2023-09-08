import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float notas1, nota2, nota3, promedio;

        System.out.println("¿Cuál es la primera nota?");
        notas1 = scanner.nextFloat();

        System.out.println("¿Cuál es la segunda nota?");
        nota2 = scanner.nextFloat();

        System.out.println("¿Cuál es la tercera nota?");
        nota3 = scanner.nextFloat();

        promedio = (notas1 + nota2 + nota3) / 3;

        if (promedio == 5) {
            System.out.println("El estudiante es excelente: " + promedio);
        } else if (promedio >= 4 && promedio < 5) {
            System.out.println("El estudiante es sobresaliente: " + promedio);
        } else if (promedio >= 3 && promedio < 4) {
            System.out.println("El estudiante es aceptable: " + promedio);
        } else if (promedio >= 2 && promedio < 3) {
            System.out.println("El estudiante es insuficiente: " + promedio);
        } else if (promedio >= 1 && promedio < 2) {
            System.out.println("El estudiante ha reprobado: " + promedio);
        } else if (promedio >= 0 && promedio < 1) {
            System.out.println("El estudiante ha reprobado: " + promedio);
        } else {
            System.out.println("La nota es inválida: " + promedio);
        }

        scanner.close();
    }
}


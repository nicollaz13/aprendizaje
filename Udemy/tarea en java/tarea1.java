
import java.util.Scanner;
import java.Math;




public class Main
{
	public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
                int base = 0;
                int altura = 0;
                int area = 0;
        System.out.println("Bienvenido al menu");
        System.out.println("1. Ingresar al sistema");
        System.out.println("2. Salir del sistema");
        System.out.println("3. Modificar datos");
        System.out.println("4. Eliminar datos");
        System.out.println("Seleccione una opcion: ");
        int opcion = scanner.nextInt();

        switch(option){
            case 1:
                
                System.out.println("Ingrese la base del rectangulo: ");
                base = scanner.nextInt();
                System.out.println("Ingrese la altura del rectangulo: ");
                altura = scanner.nextInt();
                area = base * altura;
                System.out.println("El area es: " + area);
                break;
            case 2:
                
                System.out.println("Ingrese la base del : ");
                base = scanner.nextInt();
                System.out.println("Ingrese la altura del rectangulo: ");
                altura = scanner.nextInt();
                area = (base * altura)/2;
                System.out.println("El area es: " + area);
                break;
            case 3:
                /*area de un circulo */
                int radio =1;
                System.out.println("Ingrese el radio del circulo: ");
                radio = scanner.nextInt();
                area = Math.PI * radio * radio;
                System.out.println("El area es: " + area);

                break;
            case 4:
            /*opcion de salir */
        System.out.println("saliendo del programa...");
        System.exit(0);
                break;
            default:
                break;
        }
        


	}
}






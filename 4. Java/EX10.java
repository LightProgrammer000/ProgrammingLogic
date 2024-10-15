package Apostila;

import java.util.Scanner;

public class EX10
{
    public static void main(String[] args) 
    {
        // Declara variáveis
        int seg, min, hor;
        
        // Cria Scanner
        Scanner ent = new Scanner(System.in);       
        
        // Entrada de dados
        System.out.print("# Digite a duracao em segundos: ");
        seg = ent.nextInt();
        
        // Calcula minutos e segundos restantes
        min = seg / 60;
        seg = seg % 60;
        
        // Calcula horas e minutos restantes
        hor = min / 60;
        min = min % 60;
        
        // Exibe o resultado no formato HH:MM:SS
        System.out.printf("%02d:%02d:%02d\n", hor, min, seg);
    }
}

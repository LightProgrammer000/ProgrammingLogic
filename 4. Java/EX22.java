package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX22
{
    public static void main(String[] args)
    {
        int horIni, horFin, temp;

        // Formatação de números
        Locale.setDefault(Locale.US);

        // Leitura da hora inicial e final
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Hora inicial: ");
            horIni = ent.nextInt();
            
            System.out.print("# Hora final: ");
            horFin = ent.nextInt();
        }

        // Calcula a duração do jogo
        if (horFin > horIni)
        {
            temp = horFin - horIni;            
        }

        else
        {
            temp = (24 + horFin) - horIni;
        }

        // Exibe a duração ou um aviso de tempo inválido
        if ((temp >= 1) && (temp <= 24))
        {
            System.out.println("# O JOGO DUROU " + temp + " HORA(S)");
        }

        else
        {
            System.out.println("# Tempo Invalido!");
        }
    }
}

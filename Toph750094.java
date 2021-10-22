import java.util.Arrays;
import java.util.Scanner;

public class Toph750094 {

    static int [] ladder1;
    static int [] ladder2;
    static int [] snake1;
    static int [] snake2;

    static int ladderCheck(int a) {
        for (int i = 0; i < ladder1.length; ++i) {
            if (ladder1[i] == a) return i;
        }
        return -1;
    }

    static int snakeCheck(int a) {
        for (int i = 0; i < snake1.length; ++i) {
            if (snake1[i] == a) return i;
        }
        return -1;
    }

    public static void main(String[] args) {
	    Scanner inp = new Scanner(System.in);

	    int x = inp.nextInt();
	    int y = inp.nextInt();

	    ladder1 = new int[x];
        ladder2 = new int[x];
        snake1 = new int[y];
        snake2 = new int[y];

        for (int i = 0; i < x; ++i) {
            ladder1[i] = inp.nextInt();
            ladder2[i] = inp.nextInt();
        }
        for (int i = 0; i < y; ++i) {
            snake1[i] = inp.nextInt();
            snake2[i] = inp.nextInt();
        }

	    int jaber = 0;
	    int mukhter = 0;
	    boolean jabertrue = false;
	    boolean mukhtertrue = false;
        int check;

	    for (;inp.hasNext();)
        {
            int dice = inp.nextInt();
            jaber += dice;

            if(jaber > 100)
                jaber -= dice;

            if(jaber == 1 && !jabertrue)
            {
                jabertrue = true;
            }
            else if(!jabertrue)
            {
                jaber = 0;
            }

            if(jabertrue)
            {
                check = ladderCheck(jaber);

                if(check > -1)
                {
                    jaber = ladder2[check];
                }
                else
                {
                    check = snakeCheck(jaber);
                    if(check > -1)
                    {
                        jaber = snake2[check];
                    }
                }
            }
            if(jaber == 100)
            {
                System.out.println("Jaber Tuhin is the winner.");
                break;
            }

            dice = inp.nextInt();
            mukhter += dice;

            if(mukhter > 100)
            {
                mukhter -= dice;
            }

            if(mukhter == 1 && !mukhtertrue)
            {
                mukhtertrue = true;
            }
            else if(!mukhtertrue) {
                mukhter = 0;
            }
            if(mukhtertrue)
            {
                check = ladderCheck(mukhter);

                if(check > -1)
                {
                    mukhter = ladder2[check];
                }
                else
                {
                    check = snakeCheck(mukhter);

                    if(check > -1)
                    {
                        mukhter = snake2[check];
                    }
                }
            }
            if(mukhter == 100)
            {
                System.out.println("Mukhter Hossain is the winner.");
                break;
            }
            //System.out.println("SCORE OF JABER: " + jaber);
        }
    }
}

import java.util.*;
import java.io.*;

public class SieveOfEratosthenes {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the Number: ");
        int n = Integer.parseInt(br.readLine());
        boolean[] primes = new boolean[n+1];
        sieveOfEratosthenes(n, primes);
    }

    // false in array means number is prime
    static void sieveOfEratosthenes(int n, boolean[] primes) {
        for (int i = 2; i*i <= n; i++) {
            if (!primes[i]) {
                for (int j = i*2; j <= n; j+=i) {
                    primes[j] = true;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (!primes[i]) {
                System.out.print(i + " ");
            }
        }
    }
}

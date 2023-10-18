import java.lang.Math;
public class CleearBit {
    public static int Binary(int n) {
        int m = n;
        int ans = 0;
        int power = 1;
        while(m!= 0) {
            int lastbit = m&1;
            ans = ((lastbit * power) + ans);
            power = 10*power;
            m = m >> 1;
        }
        return ans;
    }
    public static void main(String[] args) {
        int n= 10;
        System.out.println("Initial bits  "+ Binary(n));
        int pos = 3;
        int bitMask  = 1<<pos;
        int NotBitMask = ~(bitMask);
        int ans = NotBitMask & n ;
        System.out.println("After shift "+ans);
        System.out.println("After shift bits " +Binary(ans));

    }
}

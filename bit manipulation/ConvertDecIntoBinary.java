public class ConvertDecIntoBinary {

    public static void main(String[] args) {
        int n = 152;
        System.out.println(Binary(n));
    }
    static int Binary(int n) {
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
}

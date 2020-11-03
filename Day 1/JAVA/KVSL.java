import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        long h = sc.nextLong();
        long p = sc.nextLong();
        long q = sc.nextLong();
        long last = h-p;
        long j=p-q;
        long ans=1;
        if(p>=h)
        {
            System.out.println("1");
            System.exit(0);
        }
        if(p<h&&j<=0)
        {
            System.out.println("-1");
            System.exit(0);
        }
        if(j==0)
        {
            System.out.println("-1");
            System.exit(0);
        }
        if(last<0)
        last=0;
        for(long i=last;i<=h;i++){
            if(i%j==0)
            {
                ans = i/j;
                break;
            }
        }
        System.out.println(ans+1);
    }
}
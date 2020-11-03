import java.io.*;
        import java.util.*;
        class hack {
        public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int mid=0; int odd=0; int even=0;
        int T=Integer.parseInt(br.readLine());
        for(int i=1;i<=T;i++)
        {
            String s=br.readLine();
            int length=s.length();
            char[] arr = new char[length];
            if(length%2!=0)
            {
            mid=(length+1)/2;
            odd=length-2;
            even=length-1;
            for(int j=0;j<(mid-1);j++)
            {
             arr[odd]=s.charAt(j);
             odd=odd-2;
            }
            for(int k=(mid-1);k<length;k++)
            { 
               arr[even]=s.charAt(k); 
               even=even-2;
            }
            StringBuilder str = new StringBuilder();
            str.append(arr);
            System.out.print(str);
            }
            else
            {
            mid=length/2;
            odd=length-1;
            even=length-2;
            for(int m=0;m<mid;m++)
            {
             arr[odd]=s.charAt(m);
             odd=odd-2;
            }
            for(int n=mid;n<length;n++)
            {
            arr[even]=s.charAt(n);
            even=even-2;
            }
            StringBuilder str = new StringBuilder();
            str.append(arr);
            System.out.print(str);
            }
        mid=0;
        odd=0;
        even=0;
        length=0;
        System.out.println();
            }
            }
            }
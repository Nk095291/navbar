class d{
    public static void main(String[] args) {
        int n =1;
        int k = 1;
        int ar[]={1};
        solve(n,k,ar);
        for(int x:ar)
            System.out.print(x+" ");
        System.out.println();
    }

    public static void solve(int n , int k ,int ar[])
    {
        k = k%n;
        k--;
        int c = ar[k];
        for(int i=k;i>=1;i--)
            ar[i]=ar[i-1];
        ar[0]=c;
    }
}
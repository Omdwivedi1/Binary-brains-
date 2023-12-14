

import java.io.*;
 

public class Altitude {

    public static int HighestAltitude(int[] arr, int n) {
int s=0;
int max=0;
        for(int i=0;i<=n;i++)
        {s=s+arr[i];
        max=Math.max(s,max);
    }
 return max;}

    public static void main(String[] args) {

        int[] arr = {1,-1,2,3,-6};

        int n=arr.length;

        int ans = HighestAltitude(arr, n-1);

        System.out.println("Highest altitude is " + ans);

}
}
 
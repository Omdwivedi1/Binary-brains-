import java.util.*;
public class duplicates{
    
    
    
public static void main(String[] args) {
       int arr[] = {33,44,44,55,55};
   int h= removeDuplicate(arr);
   System.out.println("array after removing duplicate elements is ");
  for (int i = 0; i < h; i++) {
   System.out.print(arr[i] + " ");
    }
   
   
    }
    
    
    
    static int removeDuplicate(int[] a) {
        
int i = 0;
for (int j = 1; j < a.length; j++) {
if (a[i] != a[j]) {
 
 i++;
   a[i] = a[j];  
   
   
   
   
    }
  }
        
        
        
 return i + 1;
        
        
        
        
        
    }
}
// Question 1

package com.myoackage;
import java.util.Scanner;

class ArithmeticException_Demo 
{ 
    public static void main(String args[]) 
    { 
            int n, sum = 0;
	        Scanner s = new Scanner(System.in);
	        System.out.print("Enter no. of elements you want in array:");
	        n = s.nextInt();
	        int a[] = new int[n+1];
	        a[n] = 0;
	        System.out.println("Enter all the elements:");
	        for(int i = 0; i < n; i=i+1)
	        {
	            a[i] = s.nextInt();
	            //sum = sum + a[i];
	        }

	        try { 
	            int b = 0; 
	            for(int i = 1; i < n; i=i+2)
		        {
		        	a[i] = a[i]/b; //cannot divide by zero 
		        }
	      
	        } 
	        catch(ArithmeticException e) { 
	            System.out.println ("Can't divide a number by 0"); 
	        } 


	        for(int i = 0; i < n; i=i+2)
	        {
	  
	            sum = sum + a[i];
	        }
	        a[n] = sum;
	        System.out.println("Sum:"+sum);
            System.out.println ("Result = " + sum); 
    } 
} 
 
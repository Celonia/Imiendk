package fr.imie.imiendk;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

public class PrimeNumberActivity extends Activity {
	static {
		System.loadLibrary("number-jni");
	}
	
	public native String stringNumber(int nb);
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.prime_number);
        
        Intent in = getIntent();
        
        String value = in.getExtras().getString("val");
        
        int nb = Integer.parseInt(value);
 
        // C
        TextView tv = (TextView) this.findViewById(R.id.primenumber);
        tv.setText(this.stringNumber(nb));
        
        // JAVA
        TextView tv2 = (TextView) this.findViewById(R.id.javaprimenumber);
        tv2.setText(this.javaPrimeNumber(nb));
          
    }
    
    // JAVA
    public String javaPrimeNumber(int nb) {
    	String primeNumber = "(JAVA) C'est un chiffre premier";
    	String notPrimeNumber = "(JAVA) Ce n'est pas un chiffre premier";
    	boolean j=true;
    	int i;

    	if (nb%2==0)
    	    j=(nb==2);
    	else
    	{
    	    int s = (int) Math.sqrt(nb);

    	    for (i=3; i<=s; i+=2)

    	        if(nb % i == 0)
    	        {
    	            j=false;
    	            break;
    	        }
    	}

    	if (j)
    		return primeNumber;
    	else
    		return notPrimeNumber;
    }
}

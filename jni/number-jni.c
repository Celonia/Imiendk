#include <jni.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

JNIEXPORT jstring JNICALL Java_fr_imie_imiendk_PrimeNumberActivity_stringNumber(JNIEnv *env, jobject obj, jint nb){

	int j=1;
	int i;

	if (nb%2==0)
	    j=(nb==2);
	else
	{
	    int s = (int) sqrt(nb);

	    for (i=3; i<=s; i+=2)

	        if(nb % i == 0)
	        {
	            j=0;
	            break;
	        }
	}

	if (j)
	  return (*env)->NewStringUTF(env, "(C) C'est un chiffre premier");
	else
	  return (*env)->NewStringUTF(env, "(C) Ce n'est pas un chiffre premier");
}

#include <jni.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

JNIEXPORT jstring JNICALL Java_fr_imie_imiendk_MainActivity_stringNumbersList(JNIEnv *env, jobject obj, jint nbr){

	int i,j,n_diviseurs;

	for(i=1;i<=nbr;i++)
		{
		n_diviseurs=0;

		for(j=1;j<=i;j++)
		{
			if(i%j==0)

			n_diviseurs=n_diviseurs+1;
		}

		if(n_diviseurs==2)

		return (*env)->NewStringUTF(env, "%d est premier\n",i);
		}
	return 0;

}

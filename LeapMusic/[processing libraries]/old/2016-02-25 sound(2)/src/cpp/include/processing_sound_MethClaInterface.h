/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class processing_sound_MethClaInterface */

#ifndef _Included_processing_sound_MethClaInterface
#define _Included_processing_sound_MethClaInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     processing_sound_MethClaInterface
 * Method:    mixPlay
 * Signature: ([I[F)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_mixPlay
  (JNIEnv *, jobject, jintArray, jfloatArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    engineNew
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_processing_sound_MethClaInterface_engineNew
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    engineStart
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_engineStart
  (JNIEnv *, jobject);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    engineStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_engineStop
  (JNIEnv *, jobject);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    busConstructMono
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_processing_sound_MethClaInterface_busConstructMono
  (JNIEnv *, jobject);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    busConstructStereo
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_busConstructStereo
  (JNIEnv *, jobject);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    synthStop
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_synthStop
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    oscSet
 * Signature: (FFFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_oscSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    oscAudioSet
 * Signature: ([I[I[I[I[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_oscAudioSet
  (JNIEnv *, jobject, jintArray, jintArray, jintArray, jintArray, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    sinePlay
 * Signature: (FFFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_sinePlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    sawPlay
 * Signature: (FFFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_sawPlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    sqrPlay
 * Signature: (FFFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_sqrPlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    sqrSet
 * Signature: (FFFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_sqrSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    triPlay
 * Signature: (FFFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_triPlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    pulsePlay
 * Signature: (FFFFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_pulsePlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    pulseSet
 * Signature: (FFFFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_pulseSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    audioInStart
 * Signature: (FFFI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_audioInStart
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    audioInPlay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_audioInPlay
  (JNIEnv *, jobject, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    audioInSet
 * Signature: (FFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_audioInSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFileInfo
 * Signature: (Ljava/lang/String;)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_soundFileInfo
  (JNIEnv *, jobject, jstring);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFileConstructMono
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_processing_sound_MethClaInterface_soundFileConstructMono
  (JNIEnv *, jobject);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFilePlayMono
 * Signature: (FFFFZLjava/lang/String;FII)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_soundFilePlayMono
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jboolean, jstring, jfloat, jint, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFilePlayMulti
 * Signature: (FFFZLjava/lang/String;FI)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_soundFilePlayMulti
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jboolean, jstring, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFileSetMono
 * Signature: (FFFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_soundFileSetMono
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    soundFileSetStereo
 * Signature: (FFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_soundFileSetStereo
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    whiteNoisePlay
 * Signature: (FFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_whiteNoisePlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    whiteNoiseSet
 * Signature: (FFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_whiteNoiseSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    pinkNoisePlay
 * Signature: (FFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_pinkNoisePlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    pinkNoiseSet
 * Signature: (FFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_pinkNoiseSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    brownNoisePlay
 * Signature: (FFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_brownNoisePlay
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    brownNoiseSet
 * Signature: (FFF[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_brownNoiseSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    envelopePlay
 * Signature: ([IFFFF[I)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_envelopePlay
  (JNIEnv *, jobject, jintArray, jfloat, jfloat, jfloat, jfloat, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    doneAfter
 * Signature: (F)I
 */
JNIEXPORT jint JNICALL Java_processing_sound_MethClaInterface_doneAfter
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    highPassPlay
 * Signature: ([IF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_highPassPlay
  (JNIEnv *, jobject, jintArray, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    lowPassPlay
 * Signature: ([IF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_lowPassPlay
  (JNIEnv *, jobject, jintArray, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    bandPassPlay
 * Signature: ([IFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_bandPassPlay
  (JNIEnv *, jobject, jintArray, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    filterSet
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_filterSet
  (JNIEnv *, jobject, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    filterBwSet
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_filterBwSet
  (JNIEnv *, jobject, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    delayPlay
 * Signature: ([IFFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_delayPlay
  (JNIEnv *, jobject, jintArray, jfloat, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    delaySet
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_delaySet
  (JNIEnv *, jobject, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    reverbPlay
 * Signature: ([IFFF)[I
 */
JNIEXPORT jintArray JNICALL Java_processing_sound_MethClaInterface_reverbPlay
  (JNIEnv *, jobject, jintArray, jfloat, jfloat, jfloat);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    reverbSet
 * Signature: (FFFI)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_reverbSet
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    out
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_out
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    amplitude
 * Signature: ([I)J
 */
JNIEXPORT jlong JNICALL Java_processing_sound_MethClaInterface_amplitude
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    poll_amplitude
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_processing_sound_MethClaInterface_poll_1amplitude
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    destroy_amplitude
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_destroy_1amplitude
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    fft
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_processing_sound_MethClaInterface_fft
  (JNIEnv *, jobject, jintArray, jint);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    poll_fft
 * Signature: (J)[F
 */
JNIEXPORT jfloatArray JNICALL Java_processing_sound_MethClaInterface_poll_1fft
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_sound_MethClaInterface
 * Method:    destroy_fft
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_processing_sound_MethClaInterface_destroy_1fft
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

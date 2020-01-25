/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ctre_phoenix_sensors_CANCoderJNI */

#ifndef _Included_com_ctre_phoenix_sensors_CANCoderJNI
#define _Included_com_ctre_phoenix_sensors_CANCoderJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    Create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_Create
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    Destroy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_Destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetLastError
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetLastError
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetLastUnitString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetLastUnitString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetLastTimestamp
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetLastTimestamp
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetBusVoltage
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetBusVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetMagnetFieldStrength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetMagnetFieldStrength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetPosition
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    SetPosition
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_SetPosition
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    SetPositionToAbsolute
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_SetPositionToAbsolute
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigSensorDirection
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigSensorDirection
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetVelocity
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetAbsolutePosition
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetAbsolutePosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigVelocityMeasurementPeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigVelocityMeasurementPeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigVelocityMeasurementWindow
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigVelocityMeasurementWindow
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigAbsoluteSensorRange
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigAbsoluteSensorRange
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigMagnetOffset
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigMagnetOffset
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigSensorInitializationStrategy
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigSensorInitializationStrategy
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigFeedbackCoefficient
 * Signature: (JDLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigFeedbackCoefficient
  (JNIEnv *, jclass, jlong, jdouble, jstring, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigSetParameter
 * Signature: (JIDIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigSetParameter
  (JNIEnv *, jclass, jlong, jint, jdouble, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetParameter
 * Signature: (JIII)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetParameter
  (JNIEnv *, jclass, jlong, jint, jint, jint);

// /*
//  * Class:     com_ctre_phoenix_sensors_CANCoderJNI
//  * Method:    ConfigGetParameter_6
//  * Signature: (JIIIII)D
//  */
// JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetParameter_16
//   (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigSetCustomParam
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigSetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetCustomParam
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigFactoryDefault
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigFactoryDefault
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetStickyFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetStickyFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ClearStickyFaults
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ClearStickyFaults
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetFirmwareVersion
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetFirmwareVersion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    HasResetOccurred
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_HasResetOccurred
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    SetStatusFramePeriod
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_SetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    GetStatusFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_GetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetVelocityMeasurementPeriod
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetVelocityMeasurementPeriod
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetVelocityMeasurementWindow
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetVelocityMeasurementWindow
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetAbsoluteSensorRange
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetAbsoluteSensorRange
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetMagnetOffset
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetMagnetOffset
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetSensorDirection
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetSensorDirection
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetSensorInitializationStrategy
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetSensorInitializationStrategy
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetFeedbackCoefficient
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetFeedbackCoefficient
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetFeedbackUnitString
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetFeedbackUnitString
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_sensors_CANCoderJNI
 * Method:    ConfigGetFeedbackTimeBase
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_sensors_CANCoderJNI_ConfigGetFeedbackTimeBase
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif

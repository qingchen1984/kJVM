// DO NOT CHANGE!!! - AUTOGENERATED
// This file is needed for native method dispaching
//
// Copyright (c) 2015 Florin Serban. All rights reserved.

#ifndef KVM_MICROKERNEL_NATIVE_DISPATCH
#define KVM_MICROKERNEL_NATIVE_DISPATCH

#include "micro_kernel.h" 

kvm_internal void kvmParamRead(kvm_mem_pointer out,const NativeType type,const int paramIndex);
kvm_internal void kvmParamWrite(kvm_mem_pointer out,const NativeType type,const int paramIndex);
kvm_internal void kvmWriteReturn(kvm_mem_pointer in,const NativeType type);


void microkernelNativeDispatch(const u2 classId,const u2 methodId){

	if(classId == 46){
		if( methodId == 1){
			jbyte param0;	kvmParamRead(&param0, BYTE,0);
			jint ret = tests_NativeMethodsTest_nativeMethod1( param0);
			kvmWriteReturn(&ret,INT);
		}
		if( methodId == 2){
			jchar param0;	kvmParamRead(&param0, CHAR,0);
			jcharArray ret = tests_NativeMethodsTest_nativeMethod2( param0);
			kvmWriteReturn(&ret,CHARARRAY);
		}
		if( methodId == 3){
			jint param0;	kvmParamRead(&param0, INT,0);
			tests_NativeMethodsTest_nativeMethod3( param0);
		}
		if( methodId == 4){
			jfloat param0;	kvmParamRead(&param0, FLOAT,0);
			tests_NativeMethodsTest_nativeMethod4( param0);
		}
		if( methodId == 5){
			jbyteArray param0;	kvmParamRead(&param0, BYTEARRAY,0);
			tests_NativeMethodsTest_nativeMethod5( param0);
			kvmParamWrite(&param0, BYTEARRAY,0);
		}
		if( methodId == 6){
			jcharArray param0;	kvmParamRead(&param0, CHARARRAY,0);
			tests_NativeMethodsTest_nativeMethod6( param0);
			kvmParamWrite(&param0, CHARARRAY,0);
		}
		if( methodId == 7){
			jintArray param0;	kvmParamRead(&param0, INTARRAY,0);
			tests_NativeMethodsTest_nativeMethod7( param0);
			kvmParamWrite(&param0, INTARRAY,0);
		}
		if( methodId == 8){
			jfloatArray param0;	kvmParamRead(&param0, FLOATARRAY,0);
			tests_NativeMethodsTest_nativeMethod8( param0);
			kvmParamWrite(&param0, FLOATARRAY,0);
		}
		if( methodId == 9){
			tests_NativeMethodsTest_nativeMethod9();
		}
		if( methodId == 10){
			jbyteArray param0;	kvmParamRead(&param0, BYTEARRAY,0);
			jcharArray param1;	kvmParamRead(&param1, CHARARRAY,1);
			jintArray param2;	kvmParamRead(&param2, INTARRAY,2);
			jfloatArray param3;	kvmParamRead(&param3, FLOATARRAY,3);
			jintArray ret = tests_NativeMethodsTest_stressTest10( param0, param1, param2, param3);
			kvmParamWrite(&param0, BYTEARRAY,0);
			kvmParamWrite(&param1, CHARARRAY,1);
			kvmParamWrite(&param2, INTARRAY,2);
			kvmParamWrite(&param3, FLOATARRAY,3);
			kvmWriteReturn(&ret,INTARRAY);
		}
	}
}
#endif

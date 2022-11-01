// Copyright Epic Games, Inc. All Rights Reserved.


#include "PortingTestDemoGameModeBase.h"



bool APortingTestDemoGameModeBase::CppHasInputFocus()
{
#ifdef PICO_PORTING
	return UPicoPortFunctionLibrary::PicoPort_HasInputFocus();
#else
	return UOculusFunctionLibrary::HasInputFocus();
#endif
}

// Copyright Epic Games, Inc. All Rights Reserved.


#include "PortingTestDemoGameModeBase.h"



bool APortingTestDemoGameModeBase::CppHasInputFocus()
{
	return UOculusFunctionLibrary::HasInputFocus();
}

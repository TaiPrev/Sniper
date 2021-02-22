// Fill out your copyright notice in the Description page of Project Settings.


#include "Types.h"
#include "GenericPlatform/GenericPlatformMath.h"

/*
/////////////////////////////////////////////
//			FLOAT OPERATIONS			   //
/////////////////////////////////////////////

FFloatWLimits::FFloatWLimits() : 
	fCurrent(0.f), 
	fMin(0.f), 
	fMax(0.f)
{
}

FFloatWLimits::FFloatWLimits(float _fCurrent, float _fMin, float _fMax) : 
	fCurrent(_fCurrent), 
	fMin(_fMin), 
	fMax(_fMax)
{
}

void FFloatWLimits::Add(float _fValue)
{
	fCurrent = FGenericPlatformMath::Min<float>(fCurrent + _fValue, fMax);
}

void FFloatWLimits::Remove(float _fValue)
{
	fCurrent = FGenericPlatformMath::Max<float>(fCurrent - _fValue, fMin);
}

void FFloatWLimits::Set(float _fValue)
{
	if (_fValue < fMin) fCurrent = fMin;
	else if (_fValue > fMax) fCurrent = fMax;
	else fCurrent = _fValue;
}

float FFloatWLimits::Get()
{
	return fCurrent;
}
*/

/*
void FFloatWLimits::SetMax(float _fValue)
{
	fMax = _fValue;
	if (fMin > fMax)
	{
		SetMin(_fValue);
		fCurrent = _fValue;
	}
	else fCurrent = FGenericPlatformMath::Min<float>(fCurrent, fMax);
}

float FFloatWLimits::GetMax()
{
	return fMax;
}

void FFloatWLimits::SetMin(float _fValue)
{
	fMin = _fValue;
	if (fMax < fMin)
	{
		SetMax(_fValue);
		fCurrent = _fValue;
	}
	else fCurrent = FGenericPlatformMath::Max<float>(fCurrent, fMin);
}

float FFloatWLimits::GetMin()
{
	return fMin;
}

/////////////////////////////////////////////
//			INTEGER OPERATIONS			   //
/////////////////////////////////////////////


FIntWLimits::FIntWLimits() :
	iCurrent(0),
	iMin(0),
	iMax(0)
{
}

FIntWLimits::FIntWLimits(int _iCurrent, float _iMin, float _iMax) :
	iCurrent(_iCurrent),
	iMin(_iMin),
	iMax(_iMax)
{
}


void FIntWLimits::Add(int _iValue)
{
	iCurrent = FGenericPlatformMath::Min<int>(iCurrent + _iValue, iMax);
}

void FIntWLimits::Remove(int _iValue)
{
	iCurrent = FGenericPlatformMath::Max<int>(iCurrent - _iValue, iMax);
}

void FIntWLimits::Set(int _iValue)
{
	if (_iValue < iMin) iCurrent = iMin;
	else if (_iValue > iMax) iCurrent = iMax;
	else iCurrent = _iValue;
}

int FIntWLimits::Get()
{
	return iCurrent;
}

void FIntWLimits::SetMax(int _iValue)
{
	iMax = _iValue;
	if (iMin > iMax)
	{
		SetMin(_iValue);
		iCurrent = _iValue;
	}
	else iCurrent = FGenericPlatformMath::Min<int>(iCurrent, iMax);
}

int FIntWLimits::GetMax()
{
	return iMax;
}

void FIntWLimits::SetMin(int _iValue)
{
	iMin = _iValue;
	if (iMax < iMin)
	{
		SetMax(_iValue);
		iCurrent = _iValue;
	}
	else iCurrent = FGenericPlatformMath::Max<int>(iCurrent, iMin);
}

int FIntWLimits::GetMin()
{
	return iMin;
}



Types::Types()
{
}

Types::~Types()
{
}
*/

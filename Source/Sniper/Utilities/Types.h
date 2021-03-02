#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Types.generated.h"

USTRUCT(BlueprintType)
struct FFloatWLimits
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fCurrent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fMax;

	FFloatWLimits() : fCurrent(0.f), fMin(0.f), fMax(0.f) {}
	FFloatWLimits(float _fCurrent, float _fMin, float _fMax) : fCurrent(_fCurrent), fMin(_fMin), fMax(_fMax) {}

	void Add(float _fValue) { fCurrent = FGenericPlatformMath::Min<float>(fCurrent + _fValue, fMax); }
	void Remove(float _fValue) { fCurrent = FGenericPlatformMath::Max<float>(fCurrent - _fValue, fMin); }
	void Set(float _fValue) 
	{
		if (_fValue < fMin) fCurrent = fMin;
		else if (_fValue > fMax) fCurrent = fMax;
		else fCurrent = _fValue;
	}
	void SetMax(float _fValue) 
	{
		fMax = _fValue;
		if (fMin > fMax)
		{
			SetMin(_fValue);
			fCurrent = _fValue;
		}
		else fCurrent = FGenericPlatformMath::Min<float>(fCurrent, fMax);
	}
	void SetMin(float _fValue) 
	{
		fMin = _fValue;
		if (fMax < fMin)
		{
			SetMax(_fValue);
			fCurrent = _fValue;
		}
		else fCurrent = FGenericPlatformMath::Max<float>(fCurrent, fMin);
	}
};

USTRUCT(BlueprintType)
struct FIntWLimits
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int iCurrent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int iMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int iMax;

	FIntWLimits() : iCurrent(0), iMin(0), iMax(0) {}
	FIntWLimits(int _iCurrent, float _iMin, float _iMax) : iCurrent(_iCurrent), iMin(_iMin), iMax(_iMax) {}

	void Add(int _iValue) { iCurrent = FGenericPlatformMath::Min<int>(iCurrent + _iValue, iMax);  }
	void Subtract(int _iValue) { iCurrent = FGenericPlatformMath::Max<int>(iCurrent - _iValue, iMin); }
	void Set(int _iValue)
	{
		if (_iValue < iMin) iCurrent = iMin;
		else if (_iValue > iMax) iCurrent = iMax;
		else iCurrent = _iValue;
	}
	void SetMax(int _iValue)
	{
		iMax = _iValue;
		if (iMin > iMax)
		{
			SetMin(_iValue);
			iCurrent = _iValue;
		}
		else iCurrent = FGenericPlatformMath::Min<int>(iCurrent, iMax);
	}
	void SetMin(int _iValue)
	{
		iMin = _iValue;
		if (iMax < iMin)
		{
			SetMax(_iValue);
			iCurrent = _iValue;
		}
		else iCurrent = FGenericPlatformMath::Max<int>(iCurrent, iMin);
	}
};

/*

class SNIPER_API Types
{
public:
	Types();
	~Types();
};
*/
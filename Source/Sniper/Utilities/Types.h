// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
};

/*
	//UFUNCTION(BlueprintCallable)
	void Add(float _fValue);
	//UFUNCTION(BlueprintCallable)
	void Remove(float _fValue);
	//UFUNCTION(BlueprintCallable)
	void Set(float _fValue);
	//UFUNCTION(BlueprintCallable)
	float Get();
	//UFUNCTION(BlueprintCallable)
	void SetMax(float _fValue);
	//UFUNCTION(BlueprintCallable)
	float GetMax();
	//UFUNCTION(BlueprintCallable)
	void SetMin(float _fValue);
	//UFUNCTION(BlueprintCallable)
	float GetMin();
	
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

	FIntWLimits();
	FIntWLimits(int _iCurrent, float _iMin, float _iMax);
	
	//UFUNCTION(BlueprintCallable)
	void Add(int _iValue);
	//UFUNCTION(BlueprintCallable)
	void Remove(int _iValue);
	//UFUNCTION(BlueprintCallable)
	void Set(int _iValue);
	//UFUNCTION(BlueprintCallable)
	int Get();
	//UFUNCTION(BlueprintCallable)
	void SetMax(int _iValue);
	//UFUNCTION(BlueprintCallable)
	int GetMax();
	//UFUNCTION(BlueprintCallable)
	void SetMin(int _iValue);
	//UFUNCTION(BlueprintCallable)
	int GetMin();
	
};

* //Testing for templating structs instead of particular types
template <typename T>
struct NumberWLimits
{
	T Current, Min, Max;
	NumberWLimits(T _tCurrent, T _tMin, T _tMax) : Current(_tCurrent), Min(_tMin), Max(_tMax) {}

	inline void Add(T _tValue)
	{
		Current += _tValue;
		if (Current > Max) Current = Max;
	}

	inline void Remove(T _tValue)
	{
		Current -= _tValue;
		if (Current < Min) Current = Min;
	}

	inline void Set(T _tValue) { Current = _tValue; }
	inline T Get() { return Current; }
	
	inline void SetMax(T _tValue) 
	{	//Precondition: Must have a higher or equal value than the Minimum
		if (_tValue >= Min)
		{
			Max = _tValue;
			if (Current > Max) Current = Max;
		}
	}
	inline T GetMax() { return Max; }

	inline void SetMin(T _tValue)
	{	//Precondition: Must have a lower or equal value than the Maximum
		if (_tValue <= Max)
		{
			Min = _tValue;
			if (Current < Min) Current = Min;
		}
	}
	inline T GetMin() { return Min; }

};



class SNIPER_API Types
{
public:
	Types();
	~Types();
};
*/
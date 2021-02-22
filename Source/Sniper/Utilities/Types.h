// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
/*
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

	UPROPERTY(BlueprintCallable)
		void Add(float _fValue);
	UPROPERTY(BlueprintCallable)
		void Remove(float _fValue);
	UPROPERTY(BlueprintCallable)
		void Set(float _fValue);
	UPROPERTY(BlueprintCallable)
		float Get();
	UPROPERTY(BlueprintCallable)
		void SetMax(float _fValue);
	UPROPERTY(BlueprintCallable)
		float GetMax();
	UPROPERTY(BlueprintCallable)
		void SetMin(float _fValue);
	UPROPERTY(BlueprintCallable)
		float GetMin();
};
*/


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

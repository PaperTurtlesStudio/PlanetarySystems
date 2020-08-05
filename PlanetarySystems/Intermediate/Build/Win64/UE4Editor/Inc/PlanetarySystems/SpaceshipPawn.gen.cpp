// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlanetarySystems/Pawns/SpaceshipPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceshipPawn() {}
// Cross Module References
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_ASpaceshipPawn_NoRegister();
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_ASpaceshipPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PlanetarySystems();
// End Cross Module References
	void ASpaceshipPawn::StaticRegisterNativesASpaceshipPawn()
	{
	}
	UClass* Z_Construct_UClass_ASpaceshipPawn_NoRegister()
	{
		return ASpaceshipPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceshipPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceshipPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PlanetarySystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/SpaceshipPawn.h" },
		{ "ModuleRelativePath", "Pawns/SpaceshipPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipPawn_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "SpaceshipPawn" },
		{ "ModuleRelativePath", "Pawns/SpaceshipPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipPawn_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipPawn, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipPawn_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipPawn_Statics::NewProp_RotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceshipPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipPawn_Statics::NewProp_RotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceshipPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceshipPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceshipPawn_Statics::ClassParams = {
		&ASpaceshipPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceshipPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceshipPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceshipPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceshipPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceshipPawn, 1659662811);
	template<> PLANETARYSYSTEMS_API UClass* StaticClass<ASpaceshipPawn>()
	{
		return ASpaceshipPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceshipPawn(Z_Construct_UClass_ASpaceshipPawn, &ASpaceshipPawn::StaticClass, TEXT("/Script/PlanetarySystems"), TEXT("ASpaceshipPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

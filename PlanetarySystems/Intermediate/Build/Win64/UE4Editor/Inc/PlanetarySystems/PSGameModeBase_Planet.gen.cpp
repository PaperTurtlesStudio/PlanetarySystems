// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlanetarySystems/GameMode/PSGameModeBase_Planet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSGameModeBase_Planet() {}
// Cross Module References
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_APSGameModeBase_Planet_NoRegister();
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_APSGameModeBase_Planet();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlanetarySystems();
// End Cross Module References
	void APSGameModeBase_Planet::StaticRegisterNativesAPSGameModeBase_Planet()
	{
	}
	UClass* Z_Construct_UClass_APSGameModeBase_Planet_NoRegister()
	{
		return APSGameModeBase_Planet::StaticClass();
	}
	struct Z_Construct_UClass_APSGameModeBase_Planet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APSGameModeBase_Planet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlanetarySystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APSGameModeBase_Planet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/PSGameModeBase_Planet.h" },
		{ "ModuleRelativePath", "GameMode/PSGameModeBase_Planet.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APSGameModeBase_Planet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APSGameModeBase_Planet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APSGameModeBase_Planet_Statics::ClassParams = {
		&APSGameModeBase_Planet::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APSGameModeBase_Planet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APSGameModeBase_Planet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APSGameModeBase_Planet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APSGameModeBase_Planet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APSGameModeBase_Planet, 1389058698);
	template<> PLANETARYSYSTEMS_API UClass* StaticClass<APSGameModeBase_Planet>()
	{
		return APSGameModeBase_Planet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APSGameModeBase_Planet(Z_Construct_UClass_APSGameModeBase_Planet, &APSGameModeBase_Planet::StaticClass, TEXT("/Script/PlanetarySystems"), TEXT("APSGameModeBase_Planet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APSGameModeBase_Planet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlanetarySystems/GameMode/PSGameModeBase_Space.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSGameModeBase_Space() {}
// Cross Module References
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_APSGameModeBase_Space_NoRegister();
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_APSGameModeBase_Space();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlanetarySystems();
// End Cross Module References
	void APSGameModeBase_Space::StaticRegisterNativesAPSGameModeBase_Space()
	{
	}
	UClass* Z_Construct_UClass_APSGameModeBase_Space_NoRegister()
	{
		return APSGameModeBase_Space::StaticClass();
	}
	struct Z_Construct_UClass_APSGameModeBase_Space_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APSGameModeBase_Space_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlanetarySystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APSGameModeBase_Space_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/PSGameModeBase_Space.h" },
		{ "ModuleRelativePath", "GameMode/PSGameModeBase_Space.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APSGameModeBase_Space_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APSGameModeBase_Space>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APSGameModeBase_Space_Statics::ClassParams = {
		&APSGameModeBase_Space::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APSGameModeBase_Space_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APSGameModeBase_Space_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APSGameModeBase_Space()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APSGameModeBase_Space_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APSGameModeBase_Space, 2582433359);
	template<> PLANETARYSYSTEMS_API UClass* StaticClass<APSGameModeBase_Space>()
	{
		return APSGameModeBase_Space::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APSGameModeBase_Space(Z_Construct_UClass_APSGameModeBase_Space, &APSGameModeBase_Space::StaticClass, TEXT("/Script/PlanetarySystems"), TEXT("APSGameModeBase_Space"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APSGameModeBase_Space);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

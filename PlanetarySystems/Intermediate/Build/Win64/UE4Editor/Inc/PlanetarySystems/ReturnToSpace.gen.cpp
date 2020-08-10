// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlanetarySystems/ReturnToSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReturnToSpace() {}
// Cross Module References
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_UReturnToSpace_NoRegister();
	PLANETARYSYSTEMS_API UClass* Z_Construct_UClass_UReturnToSpace();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PlanetarySystems();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UReturnToSpace::StaticRegisterNativesUReturnToSpace()
	{
	}
	UClass* Z_Construct_UClass_UReturnToSpace_NoRegister()
	{
		return UReturnToSpace::StaticClass();
	}
	struct Z_Construct_UClass_UReturnToSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToSpaceTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnToSpaceTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReturnToSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PlanetarySystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReturnToSpace.h" },
		{ "ModuleRelativePath", "ReturnToSpace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToSpace_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "ReturnToSpace" },
		{ "ModuleRelativePath", "ReturnToSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToSpace_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReturnToSpace, PlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReturnToSpace_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToSpace_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToSpace_Statics::NewProp_ReturnToSpaceTrigger_MetaData[] = {
		{ "Category", "ReturnToSpace" },
		{ "ModuleRelativePath", "ReturnToSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToSpace_Statics::NewProp_ReturnToSpaceTrigger = { "ReturnToSpaceTrigger", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReturnToSpace, ReturnToSpaceTrigger), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReturnToSpace_Statics::NewProp_ReturnToSpaceTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToSpace_Statics::NewProp_ReturnToSpaceTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToSpace_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToSpace_Statics::NewProp_ReturnToSpaceTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReturnToSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReturnToSpace_Statics::ClassParams = {
		&UReturnToSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReturnToSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToSpace_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReturnToSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReturnToSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReturnToSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReturnToSpace, 3116452172);
	template<> PLANETARYSYSTEMS_API UClass* StaticClass<UReturnToSpace>()
	{
		return UReturnToSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReturnToSpace(Z_Construct_UClass_UReturnToSpace, &UReturnToSpace::StaticClass, TEXT("/Script/PlanetarySystems"), TEXT("UReturnToSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

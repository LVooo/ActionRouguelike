// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRouguelike/ActionRouguelikeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRouguelikeGameModeBase() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_AActionRouguelikeGameModeBase_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_AActionRouguelikeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRouguelike();
// End Cross Module References
	void AActionRouguelikeGameModeBase::StaticRegisterNativesAActionRouguelikeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AActionRouguelikeGameModeBase_NoRegister()
	{
		return AActionRouguelikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRouguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ActionRouguelikeGameModeBase.h" },
		{ "ModuleRelativePath", "ActionRouguelikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRouguelikeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::ClassParams = {
		&AActionRouguelikeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRouguelikeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionRouguelikeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionRouguelikeGameModeBase, 718744010);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<AActionRouguelikeGameModeBase>()
	{
		return AActionRouguelikeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionRouguelikeGameModeBase(Z_Construct_UClass_AActionRouguelikeGameModeBase, &AActionRouguelikeGameModeBase::StaticClass, TEXT("/Script/ActionRouguelike"), TEXT("AActionRouguelikeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRouguelikeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

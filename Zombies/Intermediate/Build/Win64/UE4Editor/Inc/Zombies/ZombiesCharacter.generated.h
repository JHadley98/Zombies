// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBIES_ZombiesCharacter_generated_h
#error "ZombiesCharacter.generated.h already included, missing '#pragma once' in ZombiesCharacter.h"
#endif
#define ZOMBIES_ZombiesCharacter_generated_h

#define Zombies_Source_Zombies_ZombiesCharacter_h_20_SPARSE_DATA
#define Zombies_Source_Zombies_ZombiesCharacter_h_20_RPC_WRAPPERS
#define Zombies_Source_Zombies_ZombiesCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Zombies_Source_Zombies_ZombiesCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombiesCharacter(); \
	friend struct Z_Construct_UClass_AZombiesCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombiesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombies"), NO_API) \
	DECLARE_SERIALIZER(AZombiesCharacter)


#define Zombies_Source_Zombies_ZombiesCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAZombiesCharacter(); \
	friend struct Z_Construct_UClass_AZombiesCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombiesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombies"), NO_API) \
	DECLARE_SERIALIZER(AZombiesCharacter)


#define Zombies_Source_Zombies_ZombiesCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombiesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombiesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombiesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombiesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombiesCharacter(AZombiesCharacter&&); \
	NO_API AZombiesCharacter(const AZombiesCharacter&); \
public:


#define Zombies_Source_Zombies_ZombiesCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombiesCharacter(AZombiesCharacter&&); \
	NO_API AZombiesCharacter(const AZombiesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombiesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombiesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombiesCharacter)


#define Zombies_Source_Zombies_ZombiesCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AZombiesCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AZombiesCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AZombiesCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AZombiesCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AZombiesCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AZombiesCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AZombiesCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AZombiesCharacter, L_MotionController); }


#define Zombies_Source_Zombies_ZombiesCharacter_h_17_PROLOG
#define Zombies_Source_Zombies_ZombiesCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_SPARSE_DATA \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_RPC_WRAPPERS \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_INCLASS \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombies_Source_Zombies_ZombiesCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_SPARSE_DATA \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Zombies_Source_Zombies_ZombiesCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIES_API UClass* StaticClass<class AZombiesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombies_Source_Zombies_ZombiesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

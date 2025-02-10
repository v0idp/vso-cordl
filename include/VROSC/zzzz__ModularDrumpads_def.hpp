#pragma once
// IWYU pragma private; include "VROSC/ModularDrumpads.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModularDrumpads)
namespace VROSC {
class DrumpadSpawner;
}
namespace VROSC {
class ModularDrumpads_SpawnerSample;
}
namespace VROSC {
class ModularDrumsController;
}
namespace VROSC {
class SampleGroup;
}
// Forward declare root types
namespace VROSC {
class ModularDrumpads;
}
namespace VROSC {
class ModularDrumpads_SpawnerSample;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ModularDrumpads);
MARK_REF_PTR_T(::VROSC::ModularDrumpads_SpawnerSample);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumpads/SpawnerSample
class CORDL_TYPE ModularDrumpads_SpawnerSample : public ::System::Object {
public:
// Declarations
/// @brief Field SampleGroup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SampleGroup, put=__cordl_internal_set_SampleGroup)) ::UnityW<::VROSC::SampleGroup>  SampleGroup;

/// @brief Field Spawner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Spawner, put=__cordl_internal_set_Spawner)) ::UnityW<::VROSC::DrumpadSpawner>  Spawner;

static inline ::VROSC::ModularDrumpads_SpawnerSample* New_ctor() ;

constexpr ::UnityW<::VROSC::SampleGroup> const& __cordl_internal_get_SampleGroup() const;

constexpr ::UnityW<::VROSC::SampleGroup>& __cordl_internal_get_SampleGroup() ;

constexpr ::UnityW<::VROSC::DrumpadSpawner> const& __cordl_internal_get_Spawner() const;

constexpr ::UnityW<::VROSC::DrumpadSpawner>& __cordl_internal_get_Spawner() ;

constexpr void __cordl_internal_set_SampleGroup(::UnityW<::VROSC::SampleGroup>  value) ;

constexpr void __cordl_internal_set_Spawner(::UnityW<::VROSC::DrumpadSpawner>  value) ;

/// @brief Method .ctor, addr 0x170d484, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumpads_SpawnerSample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumpads_SpawnerSample", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumpads_SpawnerSample(ModularDrumpads_SpawnerSample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumpads_SpawnerSample", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumpads_SpawnerSample(ModularDrumpads_SpawnerSample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{875};

/// @brief Field Spawner, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadSpawner>  ___Spawner;

/// @brief Field SampleGroup, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SampleGroup>  ___SampleGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumpads_SpawnerSample, ___Spawner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumpads_SpawnerSample, ___SampleGroup) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumpads_SpawnerSample, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumpads
class CORDL_TYPE ModularDrumpads : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnerSample = ::VROSC::ModularDrumpads_SpawnerSample;

 __declspec(property(get=get_IsSetup, put=set_IsSetup)) bool  IsSetup;

 __declspec(property(get=get_SpawnedPadsCount)) int32_t  SpawnedPadsCount;

/// @brief Field <IsSetup>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSetup_k__BackingField, put=__cordl_internal_set__IsSetup_k__BackingField)) bool  _IsSetup_k__BackingField;

/// @brief Field _spawnersSamples, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnersSamples, put=__cordl_internal_set__spawnersSamples)) ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>  _spawnersSamples;

/// @brief Method DeleteAll, addr 0x170d3ac, size 0x64, virtual false, abstract: false, final false
inline void DeleteAll() ;

static inline ::VROSC::ModularDrumpads* New_ctor() ;

/// @brief Method RefreshSpawners, addr 0x170d2f4, size 0xb8, virtual false, abstract: false, final false
inline void RefreshSpawners(::VROSC::ModularDrumsController*  instrumentController) ;

/// @brief Method SetActive, addr 0x170d410, size 0x6c, virtual false, abstract: false, final false
inline void SetActive(bool  isActive) ;

/// @brief Method Setup, addr 0x170d268, size 0x8c, virtual false, abstract: false, final false
inline void Setup(::VROSC::ModularDrumsController*  instrumentController) ;

constexpr bool const& __cordl_internal_get__IsSetup_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSetup_k__BackingField() ;

constexpr ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*> const& __cordl_internal_get__spawnersSamples() const;

constexpr ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>& __cordl_internal_get__spawnersSamples() ;

constexpr void __cordl_internal_set__IsSetup_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__spawnersSamples(::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>  value) ;

/// @brief Method .ctor, addr 0x170d47c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsSetup, addr 0x170d254, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// @brief Method get_SpawnedPadsCount, addr 0x170d1dc, size 0x78, virtual false, abstract: false, final false
inline int32_t get_SpawnedPadsCount() ;

/// @brief Method set_IsSetup, addr 0x170d25c, size 0xc, virtual false, abstract: false, final false
inline void set_IsSetup(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumpads() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumpads", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumpads(ModularDrumpads && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumpads", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumpads(ModularDrumpads const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{876};

/// @brief Field _spawnersSamples, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>  ____spawnersSamples;

/// @brief Field <IsSetup>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsSetup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumpads, ____spawnersSamples) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumpads, ____IsSetup_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumpads, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ModularDrumpads);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumpads*, "VROSC", "ModularDrumpads");
NEED_NO_BOX(::VROSC::ModularDrumpads_SpawnerSample);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumpads_SpawnerSample*, "VROSC", "ModularDrumpads/SpawnerSample");

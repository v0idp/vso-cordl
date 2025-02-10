#pragma once
// IWYU pragma private; include "VROSC/StaticData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticData)
namespace VROSC {
class SampleDatabase;
}
// Forward declare root types
namespace VROSC {
class StaticData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::StaticData);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StaticData
class CORDL_TYPE StaticData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DrumSamples)) ::UnityW<::VROSC::SampleDatabase>  DrumSamples;

/// @brief Field _drumsSamplesDatabase, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumsSamplesDatabase, put=__cordl_internal_set__drumsSamplesDatabase)) ::UnityW<::VROSC::SampleDatabase>  _drumsSamplesDatabase;

static inline ::VROSC::StaticData* New_ctor() ;

constexpr ::UnityW<::VROSC::SampleDatabase> const& __cordl_internal_get__drumsSamplesDatabase() const;

constexpr ::UnityW<::VROSC::SampleDatabase>& __cordl_internal_get__drumsSamplesDatabase() ;

constexpr void __cordl_internal_set__drumsSamplesDatabase(::UnityW<::VROSC::SampleDatabase>  value) ;

/// @brief Method .ctor, addr 0x16fb204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrumSamples, addr 0x16fb1fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::SampleDatabase> get_DrumSamples() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticData(StaticData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticData(StaticData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{826};

/// @brief Field _drumsSamplesDatabase, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SampleDatabase>  ____drumsSamplesDatabase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StaticData, ____drumsSamplesDatabase) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StaticData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::StaticData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StaticData*, "VROSC", "StaticData");

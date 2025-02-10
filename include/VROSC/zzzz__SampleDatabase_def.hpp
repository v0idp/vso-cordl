#pragma once
// IWYU pragma private; include "VROSC/SampleDatabase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SampleDatabase)
namespace UnityEngine {
class AudioClip;
}
namespace VROSC {
class SampleGroup;
}
// Forward declare root types
namespace VROSC {
class SampleDatabase;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SampleDatabase);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SampleDatabase
class CORDL_TYPE SampleDatabase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_SampleGroups)) ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>  SampleGroups;

/// @brief Field _samplegroups, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__samplegroups, put=__cordl_internal_set__samplegroups)) ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>  _samplegroups;

/// @brief Method GetGroup, addr 0x16f6e38, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::SampleGroup> GetGroup(int32_t  groupId) ;

/// @brief Method GetGroupSampleId, addr 0x16f6f48, size 0x1e8, virtual false, abstract: false, final false
inline int32_t GetGroupSampleId(int32_t  groupId, int32_t  index) ;

/// @brief Method GetSampleAudioClip, addr 0x16f7130, size 0x24c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> GetSampleAudioClip(int32_t  sampleId) ;

static inline ::VROSC::SampleDatabase* New_ctor() ;

constexpr ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*> const& __cordl_internal_get__samplegroups() const;

constexpr ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>& __cordl_internal_get__samplegroups() ;

constexpr void __cordl_internal_set__samplegroups(::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>  value) ;

/// @brief Method .ctor, addr 0x16f737c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SampleGroups, addr 0x16f6e30, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*> get_SampleGroups() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleDatabase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleDatabase(SampleDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleDatabase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleDatabase(SampleDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{789};

/// @brief Field _samplegroups, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>  ____samplegroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SampleDatabase, ____samplegroups) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SampleDatabase, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SampleDatabase);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SampleDatabase*, "VROSC", "SampleDatabase");

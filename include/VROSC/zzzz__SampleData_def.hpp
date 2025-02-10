#pragma once
// IWYU pragma private; include "VROSC/SampleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SampleData)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace VROSC {
class SampleData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SampleData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SampleData
class CORDL_TYPE SampleData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_Id)) int32_t  Id;

/// @brief Field _audioClip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClip, put=__cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip>  _audioClip;

/// @brief Field _displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

static inline ::VROSC::SampleData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

/// @brief Method .ctor, addr 0x16f6e28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Clip, addr 0x16f6e20, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_DisplayName, addr 0x16f6e18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_Id, addr 0x16f6e10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Id() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleData(SampleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleData(SampleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{788};

/// @brief Field _id, offset: 0x18, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _audioClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioClip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SampleData, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleData, ____displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleData, ____audioClip) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SampleData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SampleData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SampleData*, "VROSC", "SampleData");
